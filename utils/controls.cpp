#include <iostream>
#include "raylib.h"
#include "graphics.h"

void keyboard(float &BallX, float &BallY, int &speed){
    if (IsKeyDown(KEY_RIGHT)){
		BallX = BallX + speed;
	} else if (IsKeyDown(KEY_LEFT)){
	    BallX = BallX - speed;
	} else if (IsKeyDown(KEY_UP)){
		BallY = BallY - speed;
	} else if (IsKeyDown(KEY_DOWN)){
	    BallY = BallY + speed;
	}
}