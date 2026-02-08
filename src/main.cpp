#include "Setup.hpp"
#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_video.h>
#include <iostream>
#include "Board.hpp"

void cleanup(SDL_Window *win,SDL_Renderer *renderer);

int main(int argc, char *argv[]) {
  int h = 800;
  int w = 1200;
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window *win = SDL_CreateWindow("Chess", w, h, 0);
  SDL_Renderer *renderer = SDL_CreateRenderer(win,nullptr);
  bool running=true;
  while(running){
    std::cout<<"running"<<std::endl;
    SDL_Event evento={0};
    SDL_PollEvent(&evento);
    switch (evento.type){
      case SDL_EVENT_QUIT:
        running=false;
        break;
    }
    SDL_SetRenderDrawColor(renderer,244,134,234,10);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
  }
  cleanup(win,renderer);
  return 0;
}

void cleanup(SDL_Window *win,SDL_Renderer *renderer) {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(win);
  SDL_Quit();
}
