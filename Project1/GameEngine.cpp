#include <SDL.h>
#include <stdlib.h>
#include <iostream>
#include "GameEngine.h"
#include "Window.h"
#include "Player.h"
#include "SDLRendererAdapter.h"
#include "Scene.h"
#include "config.h"

using namespace Game;

GameEngine::GameEngine(Window& window_, RendererPort* rendererPort_, TimeServicePort* timeServicePort_) : 
    window(window_), rendererPort(rendererPort_), timeServicePort(timeServicePort_)
{
    this->physicsEngine = new PhysicsEngine(this->timeServicePort);
}



void GameEngine::startGame()
{
    SDL_bool done = SDL_FALSE;
    Player player = Player(this->rendererPort, this->physicsEngine, Config::windowWidth / 2 - 25, Config::sceneHeight);
    Scene scene = Scene(this->rendererPort);

    std::vector<Enemy> enemies = this->createEnemies();
    std::vector<VisualElement*> elements;
    elements.push_back(&player);
    for (Enemy& enemy : enemies)
    {
		elements.push_back(&enemy);
	}

    this->timeServicePort->updateLastCurrentTimeInMilliseconds();
    this->timeServicePort->updateLastElapsedTimeInMilliseconds();
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
        this->timeServicePort->updateLastCurrentTimeInMilliseconds();
        scene.renderElement();
        player.verifyKeyboardCommands();
        player.renderElement();
        for (Enemy enemy : enemies)
        {
            enemy.renderElement();
        }
        
        int n = elements.size(); 
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                VisualElement* element = elements[i];
                VisualElement* otherElement = elements[j];
                element->verifyCollision(otherElement);
            }
        }

        this->rendererPort->renderPresent();
        this->timeServicePort->updateLastElapsedTimeInMilliseconds();
    }

    this->rendererPort->destroy();
}

std::vector<Enemy> GameEngine::createEnemies()
{
    int enemiesCount = 1 + (rand() / 8);

    std::vector<Enemy> enemies;
    srand(time(nullptr));
    for (int i = 0; i < enemiesCount; ++i)
    {
        Enemy enemy = Enemy(this->rendererPort, this->physicsEngine);
        enemies.push_back(enemy);
        enemy.renderElement();
    }

    return enemies;
}