#include <iostream>
#include "src/include/SDL2/SDL.h"

#undef main

using namespace std;

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char const *argv[])
{
  /* code */
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_Window *window = SDL_CreateWindow("Hello World!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
  if (NULL == window)
  {
    std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
    return EXIT_FAILURE;
  }

  SDL_Event windowEvent;

  while (true)
  {
    if (SDL_PollEvent(&windowEvent))
    {
      if (SDL_QUIT == windowEvent.type)
      {
        break;
      }
    }
  }

  SDL_DestroyWindow(window);
  SDL_Quit();
  return EXIT_SUCCESS;
}
