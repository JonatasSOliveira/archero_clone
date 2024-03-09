#pragma once
#ifndef GAME_H
#define GAME_H

#include "Window.h"
#include "Enemy.h"
#include <vector>
#include "ConfigManager.h"


class Game
{
private:
	Window window;
	SDL_Renderer* rendererRef = nullptr;
	ConfigManager configManager = ConfigManager();
public:
	Game(const Window& window);

	std::vector<Enemy> createEnemies(SDL_Renderer* renderer);
	void startGame();
};

#endif // GAME_H

