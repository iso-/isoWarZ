#ifndef pretraitement2
#define pretraitement2

#include <SDL/SDL.h>

Uint32 getpixel(SDL_Surface *surface,unsigned x,unsigned y);
void defPixel(SDL_Surface *surface,int x,int y,Uint32 color);
void goToGrey(SDL_Surface *surface);
void browse(SDL_Surface *image, int size);
void Integral(SDL_Surface *image,int **arr);
int **createArray(int nbl, int nbcol);
static void fill_array(int **arr, int l, int c);


#endif
