# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
# include "haar.h"
# include <math.h>

int main()
{   
    SDL_Surface *surface = NULL;
	surface = IMG_Load("face0001.png");
	/*SDL_Surface *surface1 = NULL;
	SDL_Surface *surface2 = NULL;
    surface = IMG_Load("face0001.png");
surface1 = IMG_Load("face0002.png");
surface2 = IMG_Load("face0003.png");*/
    
   /* example *ar = malloc(sizeof(int) * 3);
    example e,f,g;
    e.label = 1;
    f.label = -1;
    g.label = 1;
    e.weight = 0;
    f.weight = 3;
    g.weight = 6;
	e.feat = haarr(surface);
 	f.feat = haarr(surface1);
	g.feat = haarr(surface2);*/
    
	/*ar[0] = e;
 	ar[1] = f;
	ar[2] = g;*/
	//printf("%d\n",(value(element_i(ar[0].feat,0))).res);
	//printf("%d\n",(value(element_i(ar[1].feat,0))).res);
	//printf("%d\n",(value(element_i(ar[2].feat,0))).res);

	//queue *q;
	//q = haarr2(surface);
	printf("%d\n",(element_n(haarr2(surface),0)).res);
   // l = haarFusion(surface);
	//printf("%d\n",nb_elements(l));	
  
    //printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", getpixel(surface,0,0), getpixel(surface,0,1), getpixel(surface,1,0),getpixel(surface,1,0),getpixel(surface,4,0),getpixel(surface,5,0),getpixel(surface,0,7));
    //printf("%d\n", arr[1][2]);
	//printf("%d\n",nb_elements(haarr(surface)));
    //printf("%d\n",scaling(surface,(value(element_i(haar3(surface),556)))));
    //printf("%d\n",(value(element_i(l,0))).res);
    //browse(surface,24);
   
}

queue* haarr2(SDL_Surface *image)
{ 
    queue *q;
    init(q);
    int **arr = Integral(image);
    int a,b;
    int S1, S2;
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
				a = i+h-1;
				b = j+w-1;
				S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(j-1<0))?0:arr[a][j-1])-(((i-1<0)|(b<0))?0:arr[i-1][b])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
				feat.res=S1-S2;
				push(q, type.last, feat);
			}
		}
	}
    }

   /* for(int i=0; i<image->h; i++)
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
				l = add_list(l, feat);
			}
		}
	}
    }

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
				l = add_list(l, feat);
			}
		}
	}
    }
 
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
				l = add_list(l, feat);
			}
		}
	}
    }

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
				l = add_list(l, feat);
			}
		}
	}
    }*/
    return q;
}

/*list haarFusion(SDL_Surface *i)
{
  list h1 = NULL;
  list h2 = NULL;	
  list h3 = NULL;
  list h4 = NULL;
  list h5 = NULL;

  h1 = haar1(i);
  h2 = haar2(i);
  h3 = haar3(i);
  h4 = haar4(i);
  h5 = haar5(i);

  h1 = fusion(h1,h2);
  h1 = fusion(h1,h3);
  h1 = fusion(h1,h4);
  h1 = fusion(h1,h5);
  
  return h1;
}*/

/*list haarr(SDL_Surface *image)
{ 
    list l = NULL;
    int **arr = Integral(image);
    int a,b;
    int S1, S2, S3, S4;
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
				a = i+h-1;
				b = j+w-1;
				S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(j-1<0))?0:arr[a][j-1])-(((i-1<0)|(b<0))?0:arr[i-1][b])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
				feat.res=S1-S2;
				l = add_list(l, feat);
			}
		}
	}
    }

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
				l = add_list(l, feat);
			}
		}
	}
    }

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
				l = add_list(l, feat);
			}
		}
	}
    }
 
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
				l = add_list(l, feat);
			}
		}
	}
    }

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
				l = add_list(l, feat);
			}
		}
	}
    }
    return l;
}*/

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
example* weightImage(size_t nb)  //fonction qui s'occupe de charger les images pour classifieurs faibles, en leur assignant 1 ou -1
{			
    example *arr = malloc(sizeof(int) * nb);
    for(size_t i=0; i<nb; i++)
    {
	//char duff[6];
	example e;
	//itoa((int)i, duff, 10);
	//strcat(duff,".png");
	SDL_Surface *surf = NULL;
	surf = IMG_Load("noir.png");
	if(i<300)
	{
	    e.label = 1;
	    e.weight = 1/600;
	}
	else
	{
	    e.label = -1; 	
	    e.weight = 1/1000;
	}
	e.feat = haarr(surf);
	arr[i] = e;
    }
    return arr;
}

static inline void swap(example* a, example* b)
{
  example temp = *a;
  *a = *b;
  *b = temp;
}

example* min_pos(example* arr, size_t len,int j)
{
    example* min=&arr[0];
        for (size_t i=1;i<len;i++)
        {
            if((value(element_i(arr[i].feat,j)).res) < (value(element_i((*min).feat,j)).res))
        {
            min=&arr[i];
        }
        }
    return min;
}

void sort (example *arr, int j,size_t taille)
{
    example* min = NULL;
        for(size_t i=0; i<=taille-2; i++)
        {
          example* pos=&arr[i];
          min = min_pos(arr+i,taille-i,j);
          swap(min,pos);
        }
}

int* decision(example* arr, int j, int n)
{
    int *ar = malloc(sizeof(int) * 4);
    int treshold = (value(element_i(arr[0].feat,j)).res)-1;
    int margin = 0;
    int error = 2;
    int toggle = 1;
    int w1=0;
    int w2=0;
    int w3=0;
    int w4=0;
    for(int i=0; i<n; i++)
    {
      if(arr[i].label == 1)
      {
        if((value(element_i(arr[i].feat,j)).res) > treshold)
        {
          w1 = w1 + arr[i].weight;
        }
      }
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i].label == -1)
      {
        if((value(element_i(arr[i].feat,j)).res) > treshold)
        {
          w2 = w2 + arr[i].weight;
        }
      }
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i].label == 1)
      {
        if((value(element_i(arr[i].feat,j)).res) < treshold)
        {
          w3 = w3 + arr[i].weight;
        }
      }
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i].label == -1)
      {
        if((value(element_i(arr[i].feat,j)).res) < treshold)
        {
          w4 = w4 + arr[i].weight;
        }
      }
    }
    int k = 0;
    int nmargin = margin;
    int ntreshold = treshold;
    int nerror;
    int errorp;
    int errorm;
    int ntoggle;

    while(1)
    {
      errorp = w3 + w2;
      errorm = w1 + w4;
      if(errorp < errorm)
      {
        nerror = errorp;
        ntoggle = 1;
      }
      else
      {
        nerror = errorm;
        ntoggle = -1;
      }
      if((nerror < error) || (nerror == error) & (nmargin > margin))
      {
        error = nerror;
        toggle = ntoggle;
        margin = nmargin;
	treshold = ntreshold;
      }
      if(k == n)
      {
        break;
      }
      else
      k++;
      while(1)
      {
        if(arr[k].label==-1)
        {
          w4 = w4+arr[k].weight;
          w2 = w2-arr[k].weight;
        }
        else
        {
          w3 = w3+arr[k].weight;
          w1 = w1-arr[k].weight;
        }
        if((k==n) || ((value(element_i(arr[k].feat,j)).res) != (value(element_i(arr[k+1].feat,j)).res)))
        {
          break;
        }
        else
        {
          k++;
        }
      }
      if(k == n)
      {
        ntreshold = (value(element_i(arr[n-1].feat,j)).res);
        nmargin = 0;
      }
      else
      {
        ntreshold = ((value(element_i(arr[k].feat,j)).res)+(value(element_i(arr[k+1].feat,j)).res))/2;
        nmargin = (value(element_i(arr[k+1].feat,j)).res) - (value(element_i(arr[k].feat,j)).res);
      }
    }
    ar[0] = treshold;
    ar[1] = toggle;
    ar[2] = error;
    ar[3] = margin;

    return ar;
}
