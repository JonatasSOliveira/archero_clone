#include <SDL.h>
#include <iostream>

#include "Window.h"
#include "Player.h"
#include "Game.h"

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

int main(int argc, char* argv[]) {
    Window window = Window(WINDOW_WIDTH, WINDOW_HEIGHT);
    window.createWindow();
    Game game = Game(window);
    game.startGame();
    SDL_DestroyWindow(window.getWindowRef());
    SDL_Quit();
    return 0;
}