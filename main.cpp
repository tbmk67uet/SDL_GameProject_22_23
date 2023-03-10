#include <iostream>
#include <SDL.h>
#include "SDL_Utils.h"
#include "BaseObject.h"
#include <SDL_image.h>
#include "GameMap.h"

BaseObject gBackground;



const char WINDOW_TITLE[] = "An Implementation of Code.org Painter";

SDL_Window *window;

SDL_Renderer *renderer;

bool LoadBackground(){
    bool ret=gBackground.LoadImg("texture.png",renderer);
    if(ret == false) return false;
    return true;
}

int main(int argc,char* argv[]){
    initSDL(window,renderer,SCREEN_WIDTH,SCREEN_HEIGHT,WINDOW_TITLE);
    if(LoadBackground() == false) return -1;
    GameMap game_map;
    game_map.LoadMap("map01.dat");
    game_map.LoadTiles(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
    game_map.DrawMap(renderer);
    gBackground.render(renderer,NULL);
    SDL_RenderPresent(renderer);

    waitUntilKeyPressed();

    quitSDL(window,renderer);
    return 0;
}

















