#pragma once
#ifndef GAME_H
#define GAME_H

#include "Window.h"

class Game
{
private:
	Window window;
	SDL_Renderer* rendererRef = nullptr;
public:
	Game(const Window& window);

	void startGame();
};

#endif // GAME_H

