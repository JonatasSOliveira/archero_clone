#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>

class Window
{
private:
	SDL_Window* windowRef = nullptr;
	int width;
	int height;
public:
	Window(int width, int height);

	void createWindow();

	SDL_Window* getWindowRef();
};

#endif // WINDOW_H
