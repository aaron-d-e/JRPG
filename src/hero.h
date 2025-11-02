#ifndef DRAWING_H
#define DRAWING_H
#include <SDL2/SDL.h>

void drawRect(SDL_Rect rect, SDL_Renderer *renderer, Uint8 r, Uint8 g, Uint8 b,
              Uint8 a) {

    SDL_SetRenderDrawColor(renderer, r, g, b, a);
    SDL_RenderDrawRect(renderer, &rect);
}

class Hero {
  public:
    Hero(SDL_Rect rect);
    void drawHeroRect(SDL_Renderer *renderer);
    void setHeroColor(Uint8, Uint8, Uint8, Uint8);

  private:
    SDL_Rect rect;
    Uint8 r, g, b, a;
};

#endif
