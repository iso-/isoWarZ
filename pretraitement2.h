#ifndef pretraitement2
#define pretraitement2

Uint32 getpixel(SDL_Surface *surface,unsigned x,unsigned y);
void defPixel(SDL_Surface *surface,int x,int y,Uint32 color);
void goToGrey(SDL_Surface *surface);
void browse(SDL_Surface *image, int size);
int **Integral(SDL_Surface *image);

/*typedef struct array array;
struct array
{
    int i;
    int j;
    int tab[i][j];
};*/
#endif
