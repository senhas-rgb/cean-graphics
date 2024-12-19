#include <iostream>
#include <raylib.h>
#include "utils.h"
#include "utils/audio.h"

int fps = 60;

void textPrint(const std::string& Text, const Vector2 &position, int fontSize, const Color &color, const Font &font, float spacing){
    DrawTextEx(font, Text.c_str(), position, fontSize, spacing, color);
}

void InitAll(){
    SetTargetFPS(fps);
    InitWindow(600, 600, "Sigma raylib window");
}
