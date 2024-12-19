#include <string>

#ifndef UTILS_H
#define UTILS_H

void textPrint(const std::string& Text, const Vector2 &position, int fontSize, const Color &color, const Font &font, float spacing);
void InitAll();
void Clean();

#endif