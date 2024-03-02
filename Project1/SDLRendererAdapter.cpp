#include "SDLRendererAdapter.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>

void SDLRendererAdapter::setRGBAColors(std::string hexColor) {
    std::string hex = (hexColor[0] == '#') ? hexColor.substr(1) : hexColor;

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

void SDLRendererAdapter::renderElement(RenderDataDTO* renderDataDTO) {
    this->setRGBAColors(renderDataDTO->getHexColor());
    SDL_Rect fillRect = {
        renderDataDTO->getPositionXInMeters(),
        renderDataDTO->getPositionYInMeters(),
        renderDataDTO->getWidthInMeters(),
        renderDataDTO->getHeightInMeters()
    };
    SDL_SetRenderDrawColor(this->renderer, this->redColor, this->greenColor, this->blueColor, this->alphaColor);
    SDL_RenderFillRect(this->renderer, &fillRect);
}