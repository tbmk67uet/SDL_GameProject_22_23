#ifndef GALLERY_H_INCLUDED
#define GALLERY_H_INCLUDED

#include <iostream>
#include "SDL.h"

SDL_Texture* loadTexture(std::string path,SDL_Renderer *renderer);

#endif // GALLERY_H_INCLUDED
