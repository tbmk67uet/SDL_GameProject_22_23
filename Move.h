#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

#include <SDL.h>

struct Box{
    int x,y;
    int size=10;
    int stepX=5,stepY=5;
    void render(SDL_Renderer *renderer);
    void move();
    void turnLeft();
    void turnRight();
    void turnDown();
    void turnUp();
    bool inside(int minX,int minY,int maxX,int maxY);
};

#endif // MOVE_H_INCLUDED
