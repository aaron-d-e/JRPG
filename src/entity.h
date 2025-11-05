#ifndef DRAWING_H
#define DRAWING_H
#include <SDL2/SDL.h>

class Entity {
  public:
    Entity(SDL_Rect rect); // black as default
    Entity(SDL_Rect rect, Uint8 r, Uint8 g, Uint8 b, Uint8 a); // colorized
    void drawEntityRect(SDL_Renderer *renderer);

    void takeDamage(int damage); 

  protected:
    SDL_Rect rect;
    Uint8 r, g, b, a;
    int health;
};

class Hero : public Entity {
  public:
    Hero(SDL_Rect rect) : Entity(rect) {}
    Hero(SDL_Rect rect, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
        : Entity(rect, r, g, b, a) {}

    int getHealth() { return health; }
    void basicAttack(Entity *enemy);

  private:
    int level;
    int baseDamage = 20;
};

class Enemy : public Entity {
  public:
    Enemy(SDL_Rect rect) : Entity(rect) {}
    Enemy(SDL_Rect rect, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
        : Entity(rect, r, g, b, a) {}

    int getHealth() { return health; }

  private:
	SDL_Rect main, left, right; 
};

#endif
