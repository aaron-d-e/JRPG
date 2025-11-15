#ifndef ANIMATION_H
#define ANIMATION_H
#include <vector>
using namespace std;
#pragma once

class Animation
{
   public:
    Animation(const vector<int>& frameIndices, float framesPerSecond);

   private:
    vector<int> frameIndices;
    float framesPerSecond;
    float currentTime;
    int currentIndex;
    bool loop;
    bool finished;
};

#endif
