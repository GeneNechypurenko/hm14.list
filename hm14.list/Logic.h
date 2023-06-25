#pragma once
#include <iostream>
#include <string>
#include "List.h"

using namespace std;

#define ROW 7

enum navikeys {

    ENTER = 13,
    ESC = 27,
    UP = 72,
    DOWN = 80
};

enum menutitles {

    ADD_TO_HEAD,
    ADD_TO_TAIL,
    DISPLAY,
    REMOVE_FROM_HEAD,
    REMOVE_FROM_TAIL,
    REMOVE_ALL,
    EXIT
};

void DisplayMenu(string menu[ROW], int select);

string InputData(string& str);