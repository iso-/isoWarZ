# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
# include "haar.h"
# include <math.h>

list haar1(SDL_Surface *image);
list haar2(SDL_Surface *image);
list haar3(SDL_Surface *image);
list haar4(SDL_Surface *image);
list haar5(SDL_Surface *image);
int max(int a, int b);
int scaling(SDL_Surface *image, feature feat);

int main()
{   
    SDL_Surface *surface = NULL;
    surface = IMG_Load("image.png");	
   int i=0;
    //printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", getpixel(surface,0,0), getpixel(surface,0,1), getpixel(surface,1,0),getpixel(surface,1,0),getpixel(surface,4,0),getpixel(surface,5,0),getpixel(surface,0,7));
    //printf("%d\n", arr[1][2]);
	//printf("%d",nb_elements(haar3(surface)));
	while((i<27600)&&(scaling(surface,(value(element_i(haar4(surface),i))))==(value(element_i(haar4(surface),i))).res))
	{
	i++;
	}
	printf("%d",i);
    //printf("%d\n",scaling(surface,(value(element_i(haar4(surface),3331)))));
   // printf("%d\n",(value(element_i(haar4(surface),3331))).res);
    //browse(surface,24);
}

list haar1(SDL_Surface *image)
{ 
    list list1 = NULL;
    int **arr = Integral(image);
    int a,b;
    for(int i=0; i<image->h; i++)
    {
	for(int j=0; j<image->w; j++)
	{
		for(int h=1; i+h-1<24; h++)
		{
			for(int w=1; j+2*w-1<24; w++)
			{	
				feature feat;
				feat.t=1;
				feat.i=i;
				feat.j=j;
				feat.w=w;
				feat.h=h;
				int S1,S2;
				a = i+h-1;
				b = j+w-1;
				S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(j-1<0))?0:arr[a][j-1])-(((i-1<0)|(b<0))?0:arr[i-1][b])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
				feat.res=S1-S2;
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
    int **arr = Integral(image);
    int S1,S2,S3;
    int a,b;
    for(int i=0; i<image->h; i++)
    {
	for(int j=0; j<image->w; j++)
	{
		for(int h=1; i+h-1<24; h++)
		{
			for(int w=1; j+3*w-1<24; w++)
			{	
				feature feat;
				feat.t=2;
				feat.i=i;
				feat.j=j;
				feat.w=w;
				feat.h=h;
				a = i+h-1;
				b = j+w-1;
 				S1 = (((i+h-1<0)|(j+w-1<0))?0:arr[i+h-1][j+w-1])-(((i+h-1<0)|(j-1<0))?0:arr[i+h-1][j-1])-(((i-1<0)|(j+w-1<0))?0:arr[i-1][j+w-1])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
				S3 = (((i+h-1<0)|(j+3*w-1<0))?0:arr[i+h-1][j+3*w-1])-(((i+h-1<0)|(j+2*w-1<0))?0:arr[i+h-1][j+2*w-1])-(((i-1<0)|(j+3*w-1<0))?0:arr[i-1][j+3*w-1])+(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1]);
				feat.res = S1-S2+S3;
				list1 = add_list(list1, feat);
			}
		}
	}
    }
    return list1;
}

list haar3(SDL_Surface *image)
{
    list list1 = NULL;
    int **arr = Integral(image);
    int S1,S2;
    for(int i=0; i<image->h; i++)
    {
	for(int j=0; j<image->w; j++)
	{
		for(int h=1; i+2*h-1<24; h++)
		{
			for(int w=1; j+w-1<24; w++)
			{	
				feature feat;
				feat.t=3;
				feat.i=i;
				feat.j=j;
				feat.w=w;
				feat.h=h;
  				S1=(((i+h-1<0)|(j+w-1<0))?0:arr[i+h-1][j+w-1])-(((i+h-1<0)|(j-1<0))?0:arr[i+h-1][j-1])-(((i-1<0)|(j+w-1<0))?0:arr[i-1][j+w-1])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
                              S2=(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i+2*h-1<0)|(j-1<0))?0:arr[i+2*h-1][j-1])-(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1])+(((i-1+h<0)|(j-1<0))?0:arr[i-1+h][j-1]);
				feat.res = S1-S2;
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
    int **arr = Integral(image);
    int S1,S2,S3;
    for(int i=0; i<image->w; i++)
    {
	for(int j=0; j<image->h; j++)
	{
		for(int h=1; i+3*h-1<24; h++)
		{
			for(int w=1; j+w-1<24; w++)
			{	
				feature feat;
				feat.t=4;
				feat.i=i;
				feat.j=j;
				feat.w=w;
				feat.h=h;
				S1 = (((i+h-1<0)|(j+w-1<0))?0:arr[i+h-1][j+w-1])-(((i+h-1<0)|(j-1<0))?0:arr[i+h-1][j-1])-(((i-1<0)|(j+w-1<0))?0:arr[i-1][j+w-1])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i+2*h-1<0)|(j-1<0))?0:arr[i+2*h-1][j-1])-(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1])+(((i-1+h<0)|(j-1<0))?0:arr[i-1+h][j-1]);
				S3=(((i+3*h-1<0)|(j+w-1<0))?0:arr[i+3*h-1][j+w-1])-(((i+3*h-1<0)|(j-1<0))?0:arr[i+3*h-1][j-1])-(((i-1+2*h<0)|(j+w-1<0))?0:arr[i-1+2*h][j+w-1])+(((i-1+2*h<0)|(j-1<0))?0:arr[i-1+2*h][j-1]);
				feat.res = S1-S2+S3;
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
    int **arr = Integral(image);
    int S1,S2,S3,S4;
    int a,b;
    for(int i=0; i<image->w; i++)
    {
	for(int j=0; j<image->h; j++)
	{
		for(int h=1; i+2*h-1<24; h++)
		{
			for(int w=1; j+2*w-1<24; w++)
			{	
				feature feat;
				feat.t=5;
				feat.i=i;
				feat.j=j;
				feat.w=w;
				feat.h=h;
				a = i+h-1;
				b = j+w-1;
				S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(j-1<0))?0:arr[a][j-1])-(((i-1<0)|(b<0))?0:arr[i-1][b])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i+2*h-1<0)|(j-1<0))?0:arr[i+2*h-1][j-1])-(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1])+(((i-1+h<0)|(j-1<0))?0:arr[i-1+h][j-1]);
				S3=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
				S4=(((i+2*h-1<0)|(j+2*w-1<0))?0:arr[i+2*h-1][j+2*w-1])-(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i-1+h<0)|(j+2*w-1<0))?0:arr[i-1+h][j+2*w-1])+(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1]);
				feat.res = S1-S2-S3+S4;
				list1 = add_list(list1, feat);
			}
		}
	}
    }
    return list1;
}

int max(int a, int b)
{
    return (a<b)?b:a;
}

int scaling(SDL_Surface *image, feature feat)
{ 
    int a,b,c;
    
    int w,i,j,h;
    int **arr = Integral(image);

    if(feat.t == 1)
    {
	int x = 1;
	c = 2*feat.w*feat.h;
	i = (int)(round((feat.i*image->h)/24));
	j = (int)(round((feat.j*image->h)/24));
	h = (int)(round((feat.h*image->h)/24));
	while(x < (((int)(round(1+(2*feat.w*image->h)/24)))/2)&& 2*x<((image->h-j+1)))
	{
	    x++;
	}
	
	
	int S1,S2;
	w = x;
	a = i+h-1;
	b = j+w-1;
	S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(j-1<0))?0:arr[a][j-1])-(((i-1<0)|(b<0))?0:arr[i-1][b])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
	S2=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
    
    return ((S1-S2)*c)/(2*w*h);
	
    }

    if(feat.t==2)
    {	
	int x=1;
	i = (int)(round((feat.i*image->h)/24));
	j = (int)(round((feat.j*image->h)/24));
	h = (int)(round((feat.h*image->h)/24));
	c=3*feat.w*feat.h;
	while(x < (((int)(round(1+(3*feat.w*image->h)/24)))/3)&& 3*x<((image->h-j+1)))
	{
	    x++;
	}
	w=x;
	int S1,S2,S3;
	a = i+h-1;
	b = j+w-1;
	S1 = (((i+h-1<0)|(j+w-1<0))?0:arr[i+h-1][j+w-1])-(((i+h-1<0)|(j-1<0))?0:arr[i+h-1][j-1])-(((i-1<0)|(j+w-1<0))?0:arr[i-1][j+w-1])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
	S2=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
	S3 = (((i+h-1<0)|(j+3*w-1<0))?0:arr[i+h-1][j+3*w-1])-(((i+h-1<0)|(j+2*w-1<0))?0:arr[i+h-1][j+2*w-1])-(((i-1<0)|(j+3*w-1<0))?0:arr[i-1][j+3*w-1])+(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1]);

    return ((S1-S2+S3)*c)/(3*w*h);

    }

    if(feat.t==3)
    {
	int x=1;
	i = (int)(round((feat.i*image->h)/24));
	j = (int)(round((feat.j*image->h)/24));
	w = (int)(round((feat.w*image->h)/24));
	c=2*feat.w*feat.h;
	while(x < (((int)(round(1+(2*feat.h*image->h)/24)))/2)&& 2*x<((image->h-j+1)))
	{
	    x++;
	}
	h=x;
	int S1,S2;
	S1=(((i+h-1<0)|(j+w-1<0))?0:arr[i+h-1][j+w-1])-(((i+h-1<0)|(j-1<0))?0:arr[i+h-1][j-1])-(((i-1<0)|(j+w-1<0))?0:arr[i-1][j+w-1])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
        S2=(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i+2*h-1<0)|(j-1<0))?0:arr[i+2*h-1][j-1])-(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1])+(((i-1+h<0)|(j-1<0))?0:arr[i-1+h][j-1]);

    return ((S1-S2)*c)/(2*w*h);



    }
    
    if(feat.t==4)
    {
	int x=1;
	i = (int)(round((feat.i*image->h)/24));
	j = (int)(round((feat.j*image->h)/24));
	w = (int)(round((feat.w*image->h)/24));
	c=3*feat.w*feat.h;
	while(x < (((int)(round(1+(3*feat.h*image->h)/24)))/3)&& 3*x<((image->h-j+1)))
	{
	    x++;
	}
	h=x;
	int S1,S2,S3;
	S1 = (((i+h-1<0)|(j+w-1<0))?0:arr[i+h-1][j+w-1])-(((i+h-1<0)|(j-1<0))?0:arr[i+h-1][j-1])-(((i-1<0)|(j+w-1<0))?0:arr[i-1][j+w-1])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
	S2=(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i+2*h-1<0)|(j-1<0))?0:arr[i+2*h-1][j-1])-(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1])+(((i-1+h<0)|(j-1<0))?0:arr[i-1+h][j-1]);
	S3=(((i+3*h-1<0)|(j+w-1<0))?0:arr[i+3*h-1][j+w-1])-(((i+3*h-1<0)|(j-1<0))?0:arr[i+3*h-1][j-1])-(((i-1+2*h<0)|(j+w-1<0))?0:arr[i-1+2*h][j+w-1])+(((i-1+2*h<0)|(j-1<0))?0:arr[i-1+2*h][j-1]);
	
    return ((S1-S2+S3)*c)/(3*w*h);
    }
    
    if(feat.t==5)
    {
	int x=1;
	i = (int)(round((feat.i*image->h)/24));
	j = (int)(round((feat.j*image->h)/24));
	c=4*feat.w*feat.h;
	while(x < (((int)(round(1+(2*feat.h*image->h)/24)))/2)&& 2*x<((image->h-j+1)))
	{
	    x++;
	}
	h=x;
	 x=1;	
	while(x < (((int)(round(1+(2*feat.w*image->h)/24)))/2)&& 2*x<((image->h-j+1)))
	{
	    x++;
	}
	w=x;
	a = i+h-1;
	b = j+w-1;
	int S1,S2,S3,S4;
	S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(j-1<0))?0:arr[a][j-1])-(((i-1<0)|(b<0))?0:arr[i-1][b])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
	S2=(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i+2*h-1<0)|(j-1<0))?0:arr[i+2*h-1][j-1])-(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1])+(((i-1+h<0)|(j-1<0))?0:arr[i-1+h][j-1]);
	S3=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
	S4=(((i+2*h-1<0)|(j+2*w-1<0))?0:arr[i+2*h-1][j+2*w-1])-(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i-1+h<0)|(j+2*w-1<0))?0:arr[i-1+h][j+2*w-1])+(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1]);
	
    return ((S1-S2-S3+S4)*c)/(4*w*h);
	
	
    }
return 0;
}


