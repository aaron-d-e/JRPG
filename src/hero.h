#ifndef HERO_H
#define HERO_H

#include <SDL2/SDL_render.h>
#include <iostream>
#include "animations/sprite_sheet.h"
#include "animations/animation.h"
#pragma once

class Hero
{
   public:
    Hero(SDL_Rect dest);
    virtual ~Hero() = default;

    int getHealth();
    virtual void TakeDamage(int damage) = 0;
    virtual void BasicAttack(/* enemy goes here */) = 0;

    // TODO: give an inherited class and write animations for each inherited
    // classes, could update parent to include virtual functions
   protected:
    SDL_Rect dest;
    int health;
};

class MainHero : public Hero
{
   public:
    MainHero();

    void TakeDamage(int damage);
    void BasicAttack(/* enemy goes here */);

    void SetSpriteSheet(SDL_Renderer* renderer, string filename, int frameWidth,
                        int frameHeight);

    void chooseAnimation(string animName);

   private:
    // TODO: make a container of available aniamtions
    SpriteSheet spriteSheet;
    Animation* currentAnim;
};

#endif
