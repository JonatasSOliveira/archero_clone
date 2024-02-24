#include "VisualElement.h"
#include <SDL.h>

VisualElement::VisualElement(SDL_Renderer* renderer, int positionX, int positionY, int width, int height) {
	this->renderer = renderer;
	this->positionX = positionX;
	this->positionY = positionY;
	this->width = width;
	this->height = height;
}

void VisualElement::renderElement() {
	SDL_Rect fillRect = { this->positionX, this->positionY, this->width, this->height };
	SDL_SetRenderDrawColor(this->renderer, 0xFF, 0x00, 0x00, 0xFF); // Vermelho
	SDL_RenderFillRect(this->renderer, &fillRect);
}