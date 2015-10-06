# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
#include "haar.h"

list haar1(SDL_Surface *image);
list haar2(SDL_Surface *image);
list haar3(SDL_Surface *image);
list haar4(SDL_Surface *image);
list haar5(SDL_Surface *image);

int main()
{
    /*list list1 = NULL;
    feature f;
    f.t=1;
    f.i=2;
    f.j=3;
    f.w=4;
    f.h=5;
    list1 = add_list(list1, f);*/
    
    SDL_Surface *surface = NULL;
    surface = IMG_Load("image.png");	
    //Integral(surface);
    int t=0;
    t = t + nb_elements(haar1(surface));
    t = t + nb_elements(haar2(surface));
    t = t + nb_elements(haar3(surface));
    t = t + nb_elements(haar4(surface));
    t = t + nb_elements(haar5(surface));
    printf("%d\n", t);
    //browse(surface,24);
}

list haar1(SDL_Surface *image)
{
    list list1 = NULL;
    for(int i=0; i<image->w; i++)
    {
	for(int j=0; j<image->h; j++)
	{
		for(int h=1; i+h-1<=24; h++)
		{
			for(int w=1; j+2*w-1<=24; w++)
			{	
				feature f;
				f.t=1;
				f.i=i;
				f.j=j;
				f.w=w;
				f.h=h;
				list1 = add_list(list1, f);
			}
		}
	}
    }
    return list1;
}

list haar2(SDL_Surface *image)
{
    list list1 = NULL;
    for(int i=0; i<image->w; i++)
    {
	for(int j=0; j<image->h; j++)
	{
		for(int h=1; i+h-1<=24; h++)
		{
			for(int w=1; j+3*w-1<=24; w++)
			{	
				feature f;
				f.t=2;
				f.i=i;
				f.j=j;
				f.w=w;
				f.h=h;
				list1 = add_list(list1, f);
			}
		}
	}
    }
    return list1;
}

list haar3(SDL_Surface *image)
{
    list list1 = NULL;
    for(int i=0; i<image->w; i++)
    {
	for(int j=0; j<image->h; j++)
	{
		for(int h=1; i+2*h-1<=24; h++)
		{
			for(int w=1; j+w-1<=24; w++)
			{	
				feature f;
				f.t=3;
				f.i=i;
				f.j=j;
				f.w=w;
				f.h=h;
				list1 = add_list(list1, f);
			}
		}
	}
    }
    return list1;
}

list haar4(SDL_Surface *image)
{
    list list1 = NULL;
    for(int i=0; i<image->w; i++)
    {
	for(int j=0; j<image->h; j++)
	{
		for(int h=1; i+3*h-1<=24; h++)
		{
			for(int w=1; j+w-1<=24; w++)
			{	
				feature f;
				f.t=4;
				f.i=i;
				f.j=j;
				f.w=w;
				f.h=h;
				list1 = add_list(list1, f);
			}
		}
	}
    }
    return list1;
}

list haar5(SDL_Surface *image)
{
    list list1 = NULL;
    for(int i=0; i<image->w; i++)
    {
	for(int j=0; j<image->h; j++)
	{
		for(int h=1; i+2*h-1<=24; h++)
		{
			for(int w=1; j+2*w-1<=24; w++)
			{	
				feature f;
				f.t=5;
				f.i=i;
				f.j=j;
				f.w=w;
				f.h=h;
				list1 = add_list(list1, f);
			}
		}
	}
    }
    return list1;
}
