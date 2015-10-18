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
	/*queue q=haarr2(surface);
	
	SDL_Surface *surface1 = NULL;
	
	SDL_Surface *surface2 = NULL;
       
     surface1 = IMG_Load("face0002.png");
     queue q1=haarr2(surface1);
     surface2 = IMG_Load("face0003.png");
     queue q2=haarr2(surface2);
    example *ar = malloc(sizeof(int) * 3);
    example e,f,g;
    e.label = 1;
    f.label = -1;
    g.label = 1;
    e.weight = 0;
    f.weight = 3;
    g.weight = 6;
	
	e.feat = q;
 	f.feat = q1;
	g.feat = q2;
    
	ar[0] = e;
 	ar[1] = f;
	ar[2] = g;
	
	
	
	printf("%d\n",(search(e.feat,0)).res);
	printf("%d\n",(search(ar[1].feat,0)).res);
	printf("%d\n",(search(ar[2].feat,0)).res);
	bubblesort (ar,3,0);
	printf("%d\n",(search(ar[0].feat,0)).res);
	printf("%d\n",(search(ar[1].feat,0)).res);
	printf("%d\n",(search(ar[2].feat,0)).res);
	
	*/
	//feature f;
	
	//q = haarr2(surface);
	//haarr2(surface,q);
	
   // l = haarFusion(surface);
	//printf("%d\n",nb_elements(l));	
  
    //printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", getpixel(surface,0,0), getpixel(surface,0,1), getpixel(surface,1,0),getpixel(surface,1,0),getpixel(surface,4,0),getpixel(surface,5,0),getpixel(surface,0,7));
    //printf("%d\n", arr[1][2]);
	//printf("%d\n",nb_elements(haarr(surface)));
    //printf("%d\n",scaling(surface,(value(element_i(haar3(surface),556)))));
    //printf("%d\n",(value(element_i(l,0))).res);
    //browse(surface,24);
   
}

queue haarr2(SDL_Surface *image)
{ 
    queue q=q_new();
    int **arr = Integral(image);
    int a,b;
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
				S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(j-1<0))?0:arr[a][j-1])-(((i-1<0)|(b<0))?0:arr[i-1][b])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
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
 				S1 = (((i+h-1<0)|(j+w-1<0))?0:arr[i+h-1][j+w-1])-(((i+h-1<0)|(j-1<0))?0:arr[i+h-1][j-1])-(((i-1<0)|(j+w-1<0))?0:arr[i-1][j+w-1])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
				S3 = (((i+h-1<0)|(j+3*w-1<0))?0:arr[i+h-1][j+3*w-1])-(((i+h-1<0)|(j+2*w-1<0))?0:arr[i+h-1][j+2*w-1])-(((i-1<0)|(j+3*w-1<0))?0:arr[i-1][j+3*w-1])+(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1]);
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
  				S1=(((i+h-1<0)|(j+w-1<0))?0:arr[i+h-1][j+w-1])-(((i+h-1<0)|(j-1<0))?0:arr[i+h-1][j-1])-(((i-1<0)|(j+w-1<0))?0:arr[i-1][j+w-1])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
                              S2=(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i+2*h-1<0)|(j-1<0))?0:arr[i+2*h-1][j-1])-(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1])+(((i-1+h<0)|(j-1<0))?0:arr[i-1+h][j-1]);
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
				S1 = (((i+h-1<0)|(j+w-1<0))?0:arr[i+h-1][j+w-1])-(((i+h-1<0)|(j-1<0))?0:arr[i+h-1][j-1])-(((i-1<0)|(j+w-1<0))?0:arr[i-1][j+w-1])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i+2*h-1<0)|(j-1<0))?0:arr[i+2*h-1][j-1])-(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1])+(((i-1+h<0)|(j-1<0))?0:arr[i-1+h][j-1]);
				S3=(((i+3*h-1<0)|(j+w-1<0))?0:arr[i+3*h-1][j+w-1])-(((i+3*h-1<0)|(j-1<0))?0:arr[i+3*h-1][j-1])-(((i-1+2*h<0)|(j+w-1<0))?0:arr[i-1+2*h][j+w-1])+(((i-1+2*h<0)|(j-1<0))?0:arr[i-1+2*h][j-1]);
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
				S1=(((a<0)|(b<0))?0:arr[a][b])-(((a<0)|(j-1<0))?0:arr[a][j-1])-(((i-1<0)|(b<0))?0:arr[i-1][b])+(((i-1<0)|(j-1<0))?0:arr[i-1][j-1]);
				S2=(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i+2*h-1<0)|(j-1<0))?0:arr[i+2*h-1][j-1])-(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1])+(((i-1+h<0)|(j-1<0))?0:arr[i-1+h][j-1]);
				S3=(((a<0)|(j+2*w-1<0))?0:arr[a][j+2*w-1])-(((a<0)|(b<0))?0:arr[a][b])-(((i-1<0)|(j+2*w-1<0))?0:arr[i-1][j+2*w-1])+(((i-1<0)|(b<0))?0:arr[i-1][b]);
				S4=(((i+2*h-1<0)|(j+2*w-1<0))?0:arr[i+2*h-1][j+2*w-1])-(((i+2*h-1<0)|(j+w-1<0))?0:arr[i+2*h-1][j+w-1])-(((i-1+h<0)|(j+2*w-1<0))?0:arr[i-1+h][j+2*w-1])+(((i-1+h<0)|(j+w-1<0))?0:arr[i-1+h][j+w-1]);
				feat.res = S1-S2-S3+S4;
				enqueue(q,feat);
			}
		}
	}
    }
	return q;
    
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
void bubblesort(example *tab, size_t len,int j)
{
     example tmp;
	int permutation=1;
	size_t i;
     while (permutation == 1)
     {
       permutation = 0;
       for (i=0; i<len-1; i++)
       {
	 
	 
	
         if ((search(tab[i].feat,j)).res >  (search(tab[i+1].feat,j)).res)
         {
         tmp = tab[i];
         tab[i] = tab[i+1];
         tab[i+1] = tmp;
           /* Il y a eu permutation */
         permutation = 1;
         }
       } 
      } /* while */
 
}



int* decision(example* arr, int j, int n)
{
    int *ar = malloc(sizeof(int) * 4);
    int treshold = (search(arr[0].feat,j).res)-1;
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
        if((search(arr[i].feat,j).res) > treshold)
        {
          w1 = w1 + arr[i].weight;
        }
      }
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i].label == -1)
      {
        if((search(arr[i].feat,j).res) > treshold)
        {
          w2 = w2 + arr[i].weight;
        }
      }
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i].label == 1)
      {
        if((search(arr[i].feat,j).res) < treshold)
        {
          w3 = w3 + arr[i].weight;
        }
      }
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i].label == -1)
      {
        if((search(arr[i].feat,j).res) < treshold)
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
        if((k==n) || ((search(arr[k].feat,j).res) != (search(arr[k+1].feat,j).res)))
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
        ntreshold = (search(arr[n-1].feat,j).res);
        nmargin = 0;
      }
      else
      {
        ntreshold = (search(arr[k].feat,j).res)+(search(arr[k+1].feat,j).res)/2;
        nmargin = (search(arr[k+1].feat,j).res) - (search(arr[k].feat,j).res);
      }
    }
    ar[0] = treshold;
    ar[1] = toggle;
    ar[2] = error;
    ar[3] = margin;

    return ar;
}

int *Beststump (example* arr,int d,int n)
{
int *ar = malloc(sizeof(int) * 4);
ar[2]=2;
for (int i=0;i<d;i++)
{
	
int *ar2=decision(arr,i,n);
if((ar2[2]>ar[2])|(ar2[3]>2))
	{
		if(ar2[2]==2)
		{
			ar[2]=ar2[2];
		}
}

}
}

