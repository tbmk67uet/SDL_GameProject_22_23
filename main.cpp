#include <iostream>
#include <SDL.h>
#include "SDL_Utils.h"
#include <SDL_image.h>
#include "Gallery.h"

const int SCREEN_HEIGHT=800;

const int SCREEN_WIDTH=800;

const char WINDOW_TITLE[] = "An Implementation of Code.org Painter";

SDL_Window *window;

SDL_Renderer *renderer;

int main(int argc,char* argv[]){
    initSDL(window,renderer,SCREEN_WIDTH,SCREEN_HEIGHT,WINDOW_TITLE);
    SDL_Texture *newTexture = loadTexture("texture.png",renderer);
    SDL_RenderCopy(renderer,newTexture,NULL,NULL);
    SDL_RenderPresent(renderer);
    waitUntilKeyPressed();
    quitSDL(window,renderer);
}

