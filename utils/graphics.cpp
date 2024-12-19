#include "raylib.h"
#include "graphics.h"


void scene1(float &BallX, float &BallY){
    DrawRectangle(10, 10, 580, 5, WHITE);
	DrawRectangle(10, 580, 580, 5, WHITE);
	DrawRectangle(10, 10, 5, 579, WHITE);
	DrawRectangle(590, 10, 5, 570, WHITE);
	ClearBackground(BLACK);
	DrawCircle(BallX, BallY, 20, WHITE);
}