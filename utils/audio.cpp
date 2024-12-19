#include <iostream>
#include "raylib.h"
#include "audio.h"

Sound hit;
Sound music;

void InitAudio(){
    InitAudioDevice();
    hit = LoadSound("assets/hit.wav");
    music = LoadSound("assets/speedrun.wav");
}

void backgroundMusic(){
    PlaySound(music);
}

void collisionAudio(){
    PlaySound(hit);
}


void ExitAudio(){
    UnloadSound(hit);
    UnloadSound(music);
}