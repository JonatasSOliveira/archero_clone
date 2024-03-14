#include <SDL.h>
#include <iostream>

#include "Window.h"
#include "Player.h"
#include "Game.h"
#include "config.h"

using namespace Game;

int main(int argc, char* argv[]) {
    Window window = Window(Config::windowWidth, Config::windowHeight);
    window.createWindow();
    GameEngine game = GameEngine(window);
    game.startGame();
    SDL_DestroyWindow(window.getWindowRef());
    SDL_Quit();
    return 0;
}