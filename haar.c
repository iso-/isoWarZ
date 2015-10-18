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

	
	feature f;
	queue q=q_new();
	//q = haarr2(surface);
	haarr2(surface,q);
	int i = 0;
	while(dequeue(q,&f)!=0)
	{
	i++;
	};
	printf("%d\n",i);
   // l = haarFusion(surface);
	//printf("%d\n",nb_elements(l));	
  
    //printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", getpixel(surface,0,0), getpixel(surface,0,1), getpixel(surface,1,0),getpixel(surface,1,0),getpixel(surface,4,0),getpixel(surface,5,0),getpixel(surface,0,7));
    //printf("%d\n", arr[1][2]);
	//printf("%d\n",nb_elements(haarr(surface)));
    //printf("%d\n",scaling(surface,(value(element_i(haar3(surface),556)))));
    //printf("%d\n",(value(element_i(l,0))).res);
    //browse(surface,24);
   
}

void haarr2(SDL_Surface *image,queue q)
{ 
    
    int **arr = Integral(image);
    int a,b,c,d,e,f;
    int S1, S2,S3,S4;
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
				c = j-1;
				d = i-1;
				e = j+2*w-1;
				S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
				S2=(((a<0)|(e<0))?0:arr[a][e])-(((a<0)|(b<0))?0:arr[a][b])-(((d<0)|(e<0))?0:arr[d][e])+(((d<0)|(b<0))?0:arr[d][b]);
				feat.res=S1-S2;
				enqueue(q,feat);
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
				c = j-1;
				d = i-1;
				e = j+2*w-1;
				f = j+3*w-1;
 				S1 = (((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
				S2=(((a<0)|(e<0))?0:arr[a][e])-(((a<0)|(b<0))?0:arr[a][b])-(((d<0)|(e<0))?0:arr[d][e])+(((d<0)|(b<0))?0:arr[d][b]);
				S3 = (((a<0)|(f<0))?0:arr[a][f])-(((a<0)|(e<0))?0:arr[a][e])-(((d<0)|(f<0))?0:arr[d][f])+(((d<0)|(e<0))?0:arr[d][e]);
				feat.res = S1-S2+S3;
				enqueue(q,feat);
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
  				a = i+h-1;
				b = j+w-1;
				c = j-1;
				d = i-1;
				e = i+2*h-1;
  				S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
                                S2=(((e<0)|(b<0))?0:arr[e][b])-(((e<0)|(c<0))?0:arr[e][c])-(((a<0)|(b<0))?0:arr[a][b])+(((a<0)|(c<0))?0:arr[a][c]);
				feat.res = S1-S2;
				enqueue(q,feat);
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
				a = i+h-1;
				b = j+w-1;
				c = j-1;
				d = i-1;
				e = i+2*h-1;
				f = i+3*h-1;
				S1 = (((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
				S2=(((e<0)|(b<0))?0:arr[e][b])-(((e<0)|(c<0))?0:arr[e][c])-(((a<0)|(b<0))?0:arr[a][b])+(((a<0)|(c<0))?0:arr[a][c]);
				S3=(((f<0)|(b<0))?0:arr[f][b])-(((f<0)|(c<0))?0:arr[f][c])-(((e<0)|(b<0))?0:arr[e][b])+(((e<0)|(c<0))?0:arr[e][c]);
				feat.res = S1-S2+S3;
				enqueue(q,feat);
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
				c = j-1;
				d = i-1;
				e = i+2*h-1;
				f = j+2*w-1;
				S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
				S2=(((e<0)|(b<0))?0:arr[e][b])-(((e<0)|(c<0))?0:arr[e][c])-(((a<0)|(b<0))?0:arr[a][b])+(((a<0)|(c<0))?0:arr[a][c]);
				S3=(((a<0)|(f<0))?0:arr[a][f])-(((a<0)|(b<0))?0:arr[a][b])-(((d<0)|(f<0))?0:arr[d][f])+(((d<0)|(b<0))?0:arr[d][b]);
				S4=(((e<0)|(f<0))?0:arr[e][f])-(((e<0)|(b<0))?0:arr[e][b])-(((a<0)|(f<0))?0:arr[a][f])+(((a<0)|(b<0))?0:arr[a][b]);
				feat.res = S1-S2-S3+S4;
				enqueue(q,feat);
			}
		}
	}
    }
    
}



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
    int a,b,c,d,e,f;
    
    int n,w,i,j,h;
    int **arr = Integral(image);

    if(feat.t == 1)
    {
	int x = 1;
	n = 2*feat.w*feat.h;
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
	c = j-1;
	d = i-1;
	e = j+2*w-1;
	S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
	S2=(((a<0)|(e<0))?0:arr[a][e])-(((a<0)|(b<0))?0:arr[a][b])-(((d<0)|(e<0))?0:arr[d][e])+(((d<0)|(b<0))?0:arr[d][b]);
    
       return ((S1-S2)*n)/(2*w*h);
    }

    if(feat.t==2)
    {	
	int x=1;
	i = (int)(round((feat.i*image->h)/24));
	j = (int)(round((feat.j*image->h)/24));
	h = (int)(round((feat.h*image->h)/24));
	n = 3*feat.w*feat.h;
	while(x < (((int)(round(1+(3*feat.w*image->h)/24)))/3)&& 3*x<((image->h-j+1)))
	{
	    x++;
	}
	w=x;
	int S1,S2,S3;
	a = i+h-1;
	b = j+w-1;
	c = j-1;
	d = i-1;
	e = j+2*w-1;
	f = j+3*w-1;
 	S1 = (((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
	S2=(((a<0)|(e<0))?0:arr[a][e])-(((a<0)|(b<0))?0:arr[a][b])-(((d<0)|(e<0))?0:arr[d][e])+(((d<0)|(b<0))?0:arr[d][b]);
	S3 = (((a<0)|(f<0))?0:arr[a][f])-(((a<0)|(e<0))?0:arr[a][e])-(((d<0)|(f<0))?0:arr[d][f])+(((d<0)|(e<0))?0:arr[d][e]);

    return ((S1-S2+S3)*n)/(3*w*h);
    }

    if(feat.t==3)
    {
	int x=1;
	i = (int)(round((feat.i*image->h)/24));
	j = (int)(round((feat.j*image->h)/24));
	w = (int)(round((feat.w*image->h)/24));
	n=2*feat.w*feat.h;
	while(x < (((int)(round(1+(2*feat.h*image->h)/24)))/2)&& 2*x<((image->h-j+1)))
	{
	    x++;
	}
	h=x;
	int S1,S2;
	a = i+h-1;
	b = j+w-1;
	c = j-1;
	d = i-1;
	e = i+2*h-1;
  	S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
        S2=(((e<0)|(b<0))?0:arr[e][b])-(((e<0)|(c<0))?0:arr[e][c])-(((a<0)|(b<0))?0:arr[a][b])+(((a<0)|(c<0))?0:arr[a][c]);

    return ((S1-S2)*n)/(2*w*h);
    }
    
    if(feat.t==4)
    {
	int x=1;
	i = (int)(round((feat.i*image->h)/24));
	j = (int)(round((feat.j*image->h)/24));
	w = (int)(round((feat.w*image->h)/24));
	n=3*feat.w*feat.h;
	while(x < (((int)(round(1+(3*feat.h*image->h)/24)))/3)&& 3*x<((image->h-j+1)))
	{
	    x++;
	}
	h=x;
	int S1,S2,S3;
	a = i+h-1;
	b = j+w-1;
	c = j-1;
	d = i-1;
	e = i+2*h-1;
	f = i+3*h-1;
	S1 = (((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
	S2=(((e<0)|(b<0))?0:arr[e][b])-(((e<0)|(c<0))?0:arr[e][c])-(((a<0)|(b<0))?0:arr[a][b])+(((a<0)|(c<0))?0:arr[a][c]);
	S3=(((f<0)|(b<0))?0:arr[f][b])-(((f<0)|(c<0))?0:arr[f][c])-(((e<0)|(b<0))?0:arr[e][b])+(((e<0)|(c<0))?0:arr[e][c]);
	
    return ((S1-S2+S3)*n)/(3*w*h);
    }
    
    if(feat.t==5)
    {
	int x=1;
	i = (int)(round((feat.i*image->h)/24));
	j = (int)(round((feat.j*image->h)/24));
	n=4*feat.w*feat.h;
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
	a = i+h-1;
	b = j+w-1;
	c = j-1;
	d = i-1;
	e = i+2*h-1;
	f = j+2*w-1;
	S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(c<0))?0:arr[a][c])-(((d<0)|(b<0))?0:arr[d][b])+(((d<0)|(c<0))?0:arr[d][c]);
	S2=(((e<0)|(b<0))?0:arr[e][b])-(((e<0)|(c<0))?0:arr[e][c])-(((a<0)|(b<0))?0:arr[a][b])+(((a<0)|(c<0))?0:arr[a][c]);
	S3=(((a<0)|(f<0))?0:arr[a][f])-(((a<0)|(b<0))?0:arr[a][b])-(((d<0)|(f<0))?0:arr[d][f])+(((d<0)|(b<0))?0:arr[d][b]);
	S4=(((e<0)|(f<0))?0:arr[e][f])-(((e<0)|(b<0))?0:arr[e][b])-(((a<0)|(f<0))?0:arr[a][f])+(((a<0)|(b<0))?0:arr[a][b]);
	
    return ((S1-S2-S3+S4)*n)/(4*w*h);
    }
return 0;
}
/*example* weightImage(size_t nb)  //fonction qui s'occupe de charger les images pour classifieurs faibles, en leur assignant 1 ou -1
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
*/
static inline void swap(example* a, example* b)
{
  example temp = *a;
  *a = *b;
  *b = temp;
}

/*example* min_pos(example* arr, size_t len,int j)
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
}*/
