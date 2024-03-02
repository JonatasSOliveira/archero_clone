#pragma once
#include <SDL.h>
#include <iostream>
#include "RendererPort.h"
#include "RenderDataDTO.h"


class SDLRendererAdapter : public RendererPort {
private:
	SDL_Renderer* renderer;
	Uint8 redColor = 0;
	Uint8 greenColor = 0;
	Uint8 blueColor = 0;
	Uint8 alphaColor = 0;

	void setRGBAColors(std::string hexColor);
public: 
	SDLRendererAdapter(SDL_Renderer* sdlRenderer) : renderer(sdlRenderer) {}

	virtual void renderElement(RenderDataDTO* renderDataDTO) override;
};