# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
#include "haar.h"
int haar1(SDL_Surface *integral_image);
int haar2(SDL_Surface *integral_image);
//void haar3();
//void haar4();
//void haar5();

int main()
{
    SDL_Surface *surface = NULL;
    surface=IMG_Load("photo.jpg");
    Integral(surface);
    printf("%d",haar2(surface));
}

int haar1(SDL_Surface *integral_image)
{
    /* a ------- b ------- e
     * -         -         -
     * -   R1    -   R2    -
     * -         -         -
     * d ------- c ------- f
     * Surface(R1) = a + c - b - d
     * Surface(R2) = b + f - e - c
    */

    Uint32 a,b,c,d,e,f;
    a = getpixel(integral_image, 0, 0);
    b = getpixel(integral_image, integral_image->w/2, 0);
    c = getpixel(integral_image, integral_image->w/2, integral_image->h);
    d = getpixel(integral_image, 0, integral_image->h);
    e = getpixel(integral_image, integral_image->w, 0);
    f = getpixel(integral_image, integral_image->w, integral_image->h);

    return (int) (b+f-e-c)-(a+c-b-d); 
}

int haar2(SDL_Surface *integral_image)
{
    /* a ------- b ------- c ------- d
     * -         -         -         -
     * -   R1    -   R2    -   R3    -
     * -         -         -         - 
     * e ------- f ------- g ------- h
     * Surface(R1) = a + f - b - e
     * Surface(R2) = b + g - c - f
     * Surface(R3) = c + h - d - g
    */
   Uint32 a,b,c,d,e,f,g,h;
   a=getpixel(integral_image,0,0);
   b=getpixel(integral_image,13.5,0);
   c=getpixel(integral_image,2*(integral_image->w/3),0);
   d=getpixel(integral_image,integral_image->w,0);
   e=getpixel(integral_image,0,integral_image->h);
   f=getpixel(integral_image,integral_image->w/3,integral_image->h);
   g=getpixel(integral_image,2*(integral_image->w/3),integral_image->h);
   h=getpixel(integral_image,integral_image->w,integral_image->h);

   return (int) (b+g-c-f)-(a+f-b-e)-(c+h-d-g); 
}

int haar3(SDL_Surface *integral_image)
{
    /* 
        * a ------- d
	* -         -
	* -   R1    -
	* -         -
	* b ------- e
	* -         -
	* -   R2    -
	* -         -
	* c ------- f
	* Surface(R1) = a + e - b - d
	* Surface(R2) = b + f - e - c
    */

    Uint32 a,b,c,d,e,f;
    a = getpixel(integral_image, 0, 0);
    b = getpixel(integral_image, 0, integral_image->h/2);
    c = getpixel(integral_image, 0, integral_image->w);
    d = getpixel(integral_image, integral_image->w, 0);
    e = getpixel(integral_image, integral_image->w, integral_image->h/2);
    f = getpixel(integral_image, integral_image->w, integral_image->h);

    return (int) (b+f-e-c)-(a+e-b-d); 
}

int haar4(SDL_Surface *integral_image)
{
    /* a ------- b
     *     -     -
     *  - R1 -
     * - -
     * c ------- d
     * - -
     * - R2 -
     * - -
     * e ------- f
     * - -
     * - R3 -
     * - -
     * g ------- h
     * S(R1) = d - (b + c) + a
     * S(R2) = f - (d + e) + c
     * S(R3) = h - (f + g) + e
    */
   Uint32 a,b,c,d,e,f,g,h;
   a=getpixel(integral_image,0,0);
   b=getpixel(integral_image,0,integral_image->h/3);
   c=getpixel(integral_image,0,2*(integral_image->h/3));
   d=getpixel(integral_image,0,integral_image->h);
   e=getpixel(integral_image,integral_image->w,0);
   f=getpixel(integral_image,integral_image->w,integral_image->h/3);
   g=getpixel(integral_image,integral_image->w,2*(integral_image->h/3));
   h=getpixel(integral_image,integral_image->w,integral_image->h);

   return (int) (b+g-c-f)-(a+f-b-e)-(c+h-d-g); 
}

int haar5(SDL_Surface *integral_image)
{
   Uint32 a,b,c,d,e,f,g,h,i;
   a=getpixel(integral_image,0,0);
   b=getpixel(integral_image,0,integral_image->h/2);
   c=getpixel(integral_image,0,integral_image->h);
   d=getpixel(integral_image,integral_image->w/2,0);
   e=getpixel(integral_image,integral_image->w/2,integral_image->h/2);
   f=getpixel(integral_image,integral_image->w/2,integral_image->h);
   g=getpixel(integral_image,integral_image->w,0);
   h=getpixel(integral_image,integral_image->w,integral_image->h/2);
   i=getpixel(integral_image,integral_image->w,integral_image->h);

   return (int) (b+f-c-e)+(d+h-e-g)-(a+e-b-d)-(e+i-f-h); 
}



