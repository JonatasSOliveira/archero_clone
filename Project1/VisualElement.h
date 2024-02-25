#pragma once
#ifndef VISUALELEMENT_H
#define VISUALELEMENT_H
#include <SDL.h>

class VisualElement
{
private:
	SDL_Renderer* renderer;
	SDL_Texture* sprite;
protected:
	int positionX;
	int positionY;
	int width;
	int height;
public:
	VisualElement(SDL_Renderer* renderer, SDL_Texture* sprite, int positionX, int positionY, int width, int height);

	void renderElement();
};

#endif // VISUALELEMENT_H
