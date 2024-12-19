#include "raylib.h"
#include "CollisionDetection.h"
#include "audio.h"

void borders(float &BallY, float &BallX){
    if(CheckCollisionCircleRec(Vector2{BallX, BallY}, 20, Rectangle{10, 10, 580, 5})){
		BallY = BallY + 3;
		
	} else if (CheckCollisionCircleRec(Vector2{BallX, BallY}, 20, Rectangle{10, 580, 580, 5})){
		BallY = BallY - 3;
		
	} else if (CheckCollisionCircleRec(Vector2{BallX, BallY}, 20, Rectangle{10, 10, 5, 579})){
		BallX = BallX + 3;
		
	} else if (CheckCollisionCircleRec(Vector2{BallX, BallY}, 20, Rectangle{590, 10, 5, 570})){
		BallX = BallX - 3;
	
	}
}