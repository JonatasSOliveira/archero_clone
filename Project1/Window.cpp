#include "Window.h"
#include <SDL.h>
#include <iostream>

Window::Window(int width, int height) {
    this->width = width;
    this->height = height;
}

void Window::createWindow() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        throw std::runtime_error("Ocorreu um erro!");
    }

    this->windowRef = SDL_CreateWindow(
        "Archero", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, this->width, this->height, SDL_WINDOW_SHOWN
    );
    if (this->windowRef == nullptr) {
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        throw std::runtime_error("Ocorreu um erro!");
    }
}

SDL_Window* Window::getWindowRef() {
    return this->windowRef;
}