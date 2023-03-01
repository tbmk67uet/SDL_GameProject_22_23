#include <iostream>
#include "SDL_Utils.h"



int main(int argc,char* argv[]){
    SDL_Window *window;
    SDL_Renderer *renderer;
    initSDL(window,renderer,800,800,"window");
    waitUntilKeyPressed();
    quitSDL(window,renderer);
}

