#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "pretraitement2.h"
 
/*int main()
{
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Surface *imageBase = NULL;
	
	
	imageBase = IMG_Load("photo1.jpg");
	
	if(imageBase != NULL)
	{
		printf("ok charg %d %d\n", imageBase->w, imageBase->h);

		if((imageBase->w<24) | (imageBase->h<24))
		{
			printf("echec %d %d\n", imageBase->w, imageBase->h);
		}

	}
	else
	{
		printf("Echec charg");
	}
	goToGrey(imageBase);
	SDL_SaveBMP (imageBase,"toto.bmp");
	SDL_Surface *imageGrey=NULL;
	imageGrey=IMG_Load("toto.bmp");
	browse(imageGrey);
	Integral(imageGrey);
	
	SDL_Quit();
	return EXIT_SUCCESS;



}*/


Uint32 getpixel(SDL_Surface *surface,unsigned x, unsigned y)
{
Uint8 *p=(Uint8 *)surface->pixels+y*surface->pitch+x*(surface->format->BytesPerPixel);
switch (surface->format->BytesPerPixel)
{
case 1:
return *p;
case 2:
return *(Uint16 *)p;
case 3:
if(SDL_BYTEORDER==SDL_BIG_ENDIAN)
return p[0]<<16|p[1]<<8|p[2];
else
return p[0]|p[1]<<8|p[2]<<16;
case 4:
return *(Uint32 *)p;

}
return 0;
}
void defPixel(SDL_Surface *surface,int x,int y,Uint32 color)
{
int byte=surface->format->BytesPerPixel;
Uint8 *p=(Uint8 *)surface->pixels+y*surface->pitch+x*byte;
switch(byte)
{
case 1:
*p=color;
break;
case 2:
*(Uint16*)p=color;
break;
case 3:
if(SDL_BYTEORDER==SDL_BIG_ENDIAN)
{
p[0]=(color>>16)&0xff;
p[1]=(color>>8)&0xff;
p[2]=color & 0xff;
}
else
{
p[0]=color & 0xff;
p[1]=(color>>8) &0xff;
p[2]=(color>>16)& 0xff;
}
break;
case 4:
*(Uint32 *)p=color;
break;
}
}
void goToGrey(SDL_Surface * surface)
{
	SDL_LockSurface(surface);
	
		for(int i = 0; i<surface->w; i++)
		{
			for(int j = 0; j<surface->h; j++)
			{
			Uint8 r, v, b;
			Uint32 pixel;
			pixel=getpixel(surface,i,j);
			SDL_GetRGB(pixel,surface->format,&r,&v,&b);
			float m=0.2125*r+0.7154*v+0.0721*b;
                        r=m;
			v=m;
			b=m;
                        pixel=SDL_MapRGB(surface->format,r,v,b);
			defPixel(surface,i,j,pixel);



			}
		}
	

SDL_UnlockSurface(surface);
}
void browse(SDL_Surface *image, int size)
{
SDL_Rect R,p;
	p.x=0;
	p.y=0;
	
SDL_Surface *fenetre=NULL;
while(size < image->h && size < image->w)
{
for(int i=0;i<image->w-size;i++)
{
for (int j=0;j<image->h-size;j++)
{

fenetre=SDL_CreateRGBSurface(SDL_HWSURFACE,size,size,32,0,0,0,0);
R.x=i;
R.y=j;
R.w=size;
R.h=size;
SDL_BlitSurface(image,&R,fenetre,&p);
}
}
size*=1.25;
}
SDL_SaveBMP (fenetre,"tata.bmp");
}

int **createArray(int nbl, int nbcol)
{
    int **array = (int **)malloc(sizeof(int*)*nbl);
    int *array2 = (int *)malloc(sizeof(int)*nbcol*nbl);
    for(int i=0; i<nbl; i++)
    {
	array[i] = &array2[i*nbcol];
    }
    return array;
}
void freeArray(int **tab)
{
    free(tab[0]);
    free(tab);
}
static void fill_array(int **arr, int l, int c)
{
    for(int i =0; i<l; i++)
    {
	for(int j=0; j<c; j++)
	{
	    arr[i][j] = 0;
	}
    }
}

int **Integral(SDL_Surface *image)
{
    int x,y;
    int **arr = createArray(image->h, image->w);
    fill_array(arr, image->h, image->w);
    arr[0][0] = getpixel(image,0,0);
    for(x=1; x<image->w; x++)
    {
	arr[0][x] = getpixel(image,0,x) + arr[0][x-1];
    }
    for(y=1; y<image->h; y++)
    {
	double line = getpixel(image,y,0);
	arr[y][0] = arr[y-1][0] + line;
	for(x=0; x<image->w; x++)
	{
	    arr[y][x] = arr[y-1][x] + line;
	    line += getpixel(image,y,0);
	} 
    }
    return arr;
}
