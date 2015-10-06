# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
#include "haar.h"
//void haar1(SDL_Surface *integral_image);
//int haar2(SDL_Surface *integral_image);
//void haar3();
//void haar4();
//void haar5();

int main()
{
    list list1 = NULL;
    feature f;
    f.t=1;
    f.i=2;
    f.j=3;
    f.w=4;
    f.h=5;
    list1 = add_list(list1, f);
    printf("%d\n",(value(element_i(list1,0))).j);
    /*SDL_Surface *surface = NULL;
    surface=IMG_Load("photo.jpg");	
    Integral(surface);
    printf("%d",haar2(surface));
    browse(surface,24);*/
}

/*void haar1(SDL_Surface *integral_image)
{
    int 
}*/




