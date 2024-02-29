#include "VisualElement.h"
#include <SDL.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include "VisualElementProps.h"



VisualElement::VisualElement(SDL_Renderer* renderer, VisualElementProps* visualElementProps) {
    this->positionX = visualElementProps->getPositionX();
    this->positionY = visualElementProps->getPositionY();
    this->width = visualElementProps->getWidth();
    this->height = visualElementProps->getHeight();
	this->renderer = renderer;
	this->setRgbaColor(visualElementProps->getHex());
}

void VisualElement::setRgbaColor(const std::string& hexColor) {
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

void VisualElement::renderElement() {
	SDL_Rect fillRect = { 
        this->positionX,
        this->positionY,
        this->width,
        this->height
    };
	SDL_SetRenderDrawColor(this->renderer, this->redColor, this->greenColor, this->blueColor, this->alphaColor);
	SDL_RenderFillRect(this->renderer, &fillRect);
}