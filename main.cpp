#include <raylib.h>
#include <iostream>
#include "utils.h"
#include "utils/audio.h"
#include "utils/controls.h"
#include "utils/CollisionDetection.h"
#include "utils/graphics.h"

float BallY = 300;
float BallX = 300;
int speed = 3;

int main() {
	int timer = 0;
	std::string welcome = "Hello, brave adventurer!\nWelcome to the world of CEAN";
	Font font = GetFontDefault();

	// function calls
	InitAll();
	backgroundMusic();

	while(WindowShouldClose() == false){
		borders(BallY, BallX);
		keyboard(BallX, BallY, speed);
		BeginDrawing();
		ClearBackground(RAYWHITE);
		if (timer < 100){
			textPrint(welcome, {20, 20}, 20, RED, font, 1.0f);
		}
		scene1(BallX, BallY);
		EndDrawing();
		timer++;
	}
	Clean();
	return 0;
}
