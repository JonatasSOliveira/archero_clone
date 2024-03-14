#pragma once
#ifndef GAME_H
#define GAME_H

#include "Window.h"
#include "Enemy.h"
#include <vector>

namespace Game {
	class GameEngine
	{
	private:
		Window& window;
		SDL_Renderer* rendererRef = nullptr;
	public:
		GameEngine(Window& window_);

		std::vector<Enemy> createEnemies(SDL_Renderer* renderer);
		void startGame();
	};
}

#endif // GAME_H

