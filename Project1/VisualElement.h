#pragma once
#ifndef VISUALELEMENT_H
#define VISUALELEMENT_H
#include <SDL.h>
#include <iostream>
#include "VisualElementProps.h"

class VisualElement
{
private:
	SDL_Renderer* renderer;

	void setRgbaColor(const std::string& hexColor);
protected:
	int positionX;
	int positionY;
	int width;
	int height;
	Uint8 redColor;
	Uint8 greenColor;
	Uint8 blueColor;
	Uint8 alphaColor;

public:
	VisualElement(SDL_Renderer* renderer, VisualElementProps* visualElementProps);

	void renderElement();
};

#endif // VISUALELEMENT_H
