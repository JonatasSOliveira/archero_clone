#include <SDL.h>
#include <stdlib.h>
#include <iostream>
#include "Game.h"
#include "Window.h"
#include "Player.h"
#include "SDLRendererAdapter.h"
#include "Scene.h"
#include "config.h"
#include "HitBox.h"

using namespace Game;
//faca um vetor de any contendo inimigos e player
std::vector<Character> objects;


GameEngine::GameEngine(Window& window_) : window(window_)
{
    if (this->window.getWindowRef() == nullptr)
    {
    }

    this->rendererRef = SDL_CreateRenderer(this->window.getWindowRef(), -1, SDL_RENDERER_ACCELERATED);
    if (this->rendererRef == nullptr)
    {
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(this->window.getWindowRef());
        SDL_Quit();
        throw std::runtime_error("Ocorreu um erro!");
    }
}

void GameEngine::startGame()
{
    SDL_bool done = SDL_FALSE;
    SDLRendererAdapter *sdlAdapter = new SDLRendererAdapter(this->rendererRef);

    Player player = Player(sdlAdapter, Config::windowWidth / 2 - 25, Config::sceneHeight);
    objects.push_back(player);
    Scene scene = Scene(sdlAdapter);
    std::vector<Enemy> enemies = this->createEnemies(this->rendererRef);
    std::cout << "Enemies count: " << enemies.size() << std::endl;

    while (!done)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                done = SDL_TRUE;
            }
        }

        SDL_SetRenderDrawColor(this->rendererRef, 0xFF, 0xFF, 0xFF, 0xFF); // Branco
        SDL_RenderClear(this->rendererRef);

        scene.renderElement();

        player.verifyKeyboardCommands();
        player.renderElement();
        for (Enemy enemy : enemies)
        {
            enemy.renderElement();
        }

        for (int i = 0; i < objects.size(); i++)
        {
            for (int j = 0; j < objects.size(); j++)
            {
                if (i != j)
                {
                    if (objects[i].verifyCollision(objects[j]))
                    {
                        objects[i].onCollision(objects[j]);
                    }
                }
            }
        }
        

        SDL_RenderPresent(this->rendererRef);
        SDL_Delay(10); // Espera um pouco antes de continuar
    }

    SDL_DestroyRenderer(this->rendererRef);
}

std::vector<Enemy> GameEngine::createEnemies(SDL_Renderer *renderer)
{
    int enemiesCount = 1 + (rand() / 8);

    std::vector<Enemy> enemies;
    srand(time(nullptr));
    for (int i = 0; i < enemiesCount; ++i)
    {
        Enemy enemy = Enemy(new SDLRendererAdapter(this->rendererRef));
        enemies.push_back(enemy);
        objects.push_back(enemy);
        enemy.renderElement();
    }

    return enemies;
}