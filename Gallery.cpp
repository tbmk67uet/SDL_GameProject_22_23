#include <SDL_image.h>
#include "Gallery.h"
#include "SDL_utils.h"

bool LoadImg( std::string path,SDL_Renderer *renderer )
{

	SDL_Texture* newTexture = NULL;
    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
    if ( loadedSurface == NULL )
        logSDLError(std::cout, "Unable to load image " + path + " SDL_image Error: " + IMG_GetError());
    else {
        newTexture = SDL_CreateTextureFromSurface( renderer, loadedSurface );
        if( newTexture == NULL )
            logSDLError(std::cout, "Unable to create texture from " + path + " SDL Error: " + SDL_GetError());
        SDL_FreeSurface( loadedSurface );
    }
    return newTexture != NULL;
}

void render(SDL_Renderer* renderer,const SDL_Rect* clip){
    SDL_Rect renderquad = {x}
}
