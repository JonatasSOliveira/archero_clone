#include <SDL.h>
#include <stdlib.h>
#include <iostream>
#include "Game.h"
#include "Window.h"
#include "Player.h"
#include "Enemy.h"
#include "SDLRendererAdapter.h"


Game::Game(const Window& window): window(window) {
    this->window = window;
	if (this->window.getWindowRef() == nullptr) {
	}

    this->rendererRef = SDL_CreateRenderer(this->window.getWindowRef(), -1, SDL_RENDERER_ACCELERATED);
    if (this->rendererRef == nullptr) {
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(this->window.getWindowRef());
        SDL_Quit();
        throw std::runtime_error("Ocorreu um erro!");
    }

}

void Game::startGame() {
	SDL_bool done = SDL_FALSE;

    Player player = Player(new SDLRendererAdapter(this->rendererRef), 800 / 2 - 25, 450);
    std::vector<Enemy> enemies = this->createEnemies(this->rendererRef);
    std::cout << "Enemies count: " << enemies.size() << std::endl;

    while (!done) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                done = SDL_TRUE;
            }
        }

        const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
        if (currentKeyStates[SDL_SCANCODE_UP]) {
            player.goUp();
        }
        if (currentKeyStates[SDL_SCANCODE_DOWN]) {
            player.goDown();
        }
        if (currentKeyStates[SDL_SCANCODE_LEFT]) {
            player.goLeft();
        }
        if (currentKeyStates[SDL_SCANCODE_RIGHT]) {
            player.goRight();
        }

        SDL_SetRenderDrawColor(this->rendererRef, 0xFF, 0xFF, 0xFF, 0xFF); // Branco
        SDL_RenderClear(this->rendererRef);

        // SDL_Rect fillRect = { squareX, squareY, 50, 50 };
        // SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF); // Vermelho
        // SDL_RenderFillRect(renderer, &fillRect);
        player.renderElement();
        for (Enemy enemy : enemies) {
            enemy.renderElement();
        }

        SDL_RenderPresent(this->rendererRef);
        SDL_Delay(10); // Espera um pouco antes de continuar
    }

    SDL_DestroyRenderer(this->rendererRef);

}

std::vector<Enemy> Game::createEnemies(SDL_Renderer* renderer) {
    int enemiesCount = 1 + (rand() / 8);

    std::vector<Enemy> enemies;
    for (int i = 0; i < enemiesCount; ++i) {
        Enemy enemy = Enemy(new SDLRendererAdapter(this->rendererRef));
        enemies.push_back(enemy);
        enemy.renderElement();
    }

    return enemies;
}