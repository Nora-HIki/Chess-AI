#include <iostream>
#include <SDL3/SDL.h>
#include "Setup.hpp"
#include "Board.hpp"

int main (int argc, char *argv[]) {
    
  setup_board();
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Quit();

  std::cout << "bankai" << std::endl;
  



  Board_layout board1;
  return 0;
}
