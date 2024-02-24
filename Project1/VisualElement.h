#pragma once
#ifndef VISUALELEMENT_H
#define VISUALELEMENT_H
#include <SDL.h>

class VisualElement
{
private:
	SDL_Renderer* renderer;
protected:
	int positionX;
	int positionY;
	int width;
	int height;
public:
	VisualElement(SDL_Renderer* renderer, int positionX, int positionY, int width, int height);

	void renderElement();
};

#endif // VISUALELEMENT_H
