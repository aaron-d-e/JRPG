#ifndef LEVELS_H
#define LEVELS_H
#pragma once

#include "entity.h"
#include <fstream>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class GameManager {
    // TODO:
    //  1) create and parse json to get level data
    //  2) store data within class object
    //  3) load level function with enemies from json
    //  4) create and delete levels when level changes
    //  5) create a new inventory class that stores player rewards - maybe this
    //  gets stores in a csv for reload each start, gamemanager updates this csv

  public:
    void LoadFiles();

  private:
    int level;
    vector<Entity *> enemies;
    map<int, string> levelToFile;
};
#endif
