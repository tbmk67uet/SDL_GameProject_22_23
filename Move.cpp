#include <iostream>
#include "Move.h"

void Box::render(SDL_Renderer* renderer){
    SDL_Rect filled_rect;
    filled_rect.x=x;
    filled_rect.y=y;
    filled_rect.w=size;
    filled_rect.h=size;
    SDL_SetRenderDrawColor(renderer,0,255,0,255);
    SDL_RenderFillRect(renderer,&filled_rect);
}

void Box::move(){
    x+=stepX;
    y+=stepY;
}

void Box::turnLeft(){
    stepY=0;
    stepX=-5;
}

void Box::turnRight(){
    stepY=0;
    stepX=5;
}

void Box::turnDown(){
    stepX=0;
    stepY=5;
}

void Box::turnUp(){
    stepX=0;
    stepY=-5;
}

bool Box::inside(int minX,int minY,int maxX,int maxY){
    return (minX<=x && minY<=y && x+size<=maxX && y+size<=maxY);
}
