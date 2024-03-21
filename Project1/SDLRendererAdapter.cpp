#include "SDLRendererAdapter.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace Game;

SDLRendererAdapter::SDLRendererAdapter(SDL_Window* sdlWindow) {
    this->sdlRenderer = SDL_CreateRenderer(sdlWindow, -1, SDL_RENDERER_ACCELERATED);
    if (this->sdlRenderer == nullptr)
    {
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(sdlWindow);
        SDL_Quit();
        throw std::runtime_error("Ocorreu um erro!");
    }
}

void SDLRendererAdapter::setRGBAColors(std::string_view hexColor) {
    std::string hex = std::string(hexColor);
    if (!hex.empty() && hex[0] == '#') {
        hex = hex.substr(1);
    }

    // Converte o valor hexadecimal para um valor inteiro
    std::stringstream ss;
    ss << std::hex << hex;
    unsigned int hexValue;
    ss >> hexValue;

    // Extrai os componentes RGBA
    this->redColor = (hexValue >> 16) & 0xFF;
    this->greenColor = (hexValue >> 8) & 0xFF;
    this->blueColor = hexValue & 0xFF;
    this->alphaColor = 255; // Valor padrão de opacidade (sem transparência)

    // Se o comprimento do valor hexadecimal for maior que 6, temos um valor de opacidade
    if (hex.length() > 6) {
        this->alphaColor = (hexValue >> 24) & 0xFF;
    }
}

void SDLRendererAdapter::renderElement(const RenderDataDTO& renderDataDTO) {
    this->setRGBAColors(renderDataDTO.hexColor);
    SDL_Rect fillRect = {
        renderDataDTO.positionXInMeters,
        renderDataDTO.positionYInMeters,
        renderDataDTO.widthInMeters,
        renderDataDTO.heightInMeters
    };
    SDL_SetRenderDrawColor(this->sdlRenderer, this->redColor, this->greenColor, this->blueColor, this->alphaColor);
    SDL_RenderFillRect(this->sdlRenderer, &fillRect);
}