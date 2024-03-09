#include <SDL.h>
#include <iostream>

#include "Window.h"
#include "Player.h"
#include "Game.h"
#include "ConfigManager.h"

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

int main(int argc, char* argv[]) {
    ConfigManager configManager = ConfigManager();
    Window window = Window(configManager.getWindowWidth(), configManager.getWindowHeight());
    window.createWindow();
    Game game = Game(window);
    game.startGame();
    SDL_DestroyWindow(window.getWindowRef());
    SDL_Quit();
    return 0;
}