# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
# include "haar.h"

list haar1(SDL_Surface *image);
list haar2(SDL_Surface *image);
list haar3(SDL_Surface *image);
list haar4(SDL_Surface *image);
list haar5(SDL_Surface *image);

int main()
{
    /*list list1 = NULL;
    feature feat;
    feat.t=1;
    feat.i=2;
    feat.j=3;
    feat.w=4;
    feat.h=5;
    list1 = add_list(list1, feat);*/
    
    SDL_Surface *surface = NULL;
    surface = IMG_Load("image.png");	
    
    int *array = malloc(
    //Uint32 a = getpixel(surface,0,0);
    //Uint32 b = getpixel(surface,0,1);
    //printf("%d\n",a);
    //Integral(surface);
    /*int t=0;
    t = t + nb_elements(haar1(surface));
    t = t + nb_elements(haar2(surface));
    t = t + nb_elements(haar3(surface));
    t = t + nb_elements(haar4(surface));
    t = t + nb_elements(haar5(surface));*/
    printf("%d\n", arr[0,0]);
    //printf("%d\n", (value(element_i(haar1(surface),0))).res);
    //browse(surface,24);
}

list haar1(SDL_Surface *image)
{ 
    list list1 = NULL;
    //image = Integral(image);
    Uint32 a,b,c,d,e,f;
    for(int i=0; i<image->w; i++)
    {
	for(int j=0; j<image->h; j++)
	{
		for(int h=1; i+h-1<=24; h++)
		{
			for(int w=1; j+2*w-1<=24; w++)
			{	
				feature feat;
				feat.t=1;
				feat.i=i;
				feat.j=j;
				feat.w=w;
				feat.h=h;
				a = getpixel(image,i,j);
				b = getpixel(image,i,j+h);
				c = getpixel(image,i+(w/2),j);
				d = getpixel(image,i+(w/2),j+h);
				e = getpixel(image,i+w,j);
				f = getpixel(image,i+w,j+h);
				feat.res = (c+f-d-e)-(a+d-b-c);
				list1 = add_list(list1, feat);
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
				feature feat2;
				feat2.t=2;
				feat2.i=i;
				feat2.j=j;
				feat2.w=w;
				feat2.h=h;
				list1 = add_list(list1, feat2);
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
				feature feat;
				feat.t=3;
				feat.i=i;
				feat.j=j;
				feat.w=w;
				feat.h=h;
				list1 = add_list(list1, feat);
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
				feature feat;
				feat.t=4;
				feat.i=i;
				feat.j=j;
				feat.w=w;
				feat.h=h;
				list1 = add_list(list1, feat);
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
				feature feat;
				feat.t=5;
				feat.i=i;
				feat.j=j;
				feat.w=w;
				feat.h=h;
				list1 = add_list(list1, feat);
			}
		}
	}
    }
    return list1;
}

