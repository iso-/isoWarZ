# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
#include "funcInter.h"
#include "data.h"
# include "haar.h"
# include <math.h>
# include <dirent.h>
# include <string.h>

int main (int argc, char *argv[])
{
  if(argc < 2)
  {
    printf("(1) ./RTFPicture grey name_of_the_picture\n(2) ./RTFPicture integral name_of_the_picture \n(3) ./RTFPicture haar name_of_the_picture the_number_of_the_ieme_caracteristicHaar\n(4) ./RTFPicture decision a_number\n(5) ./RTFPicture adaboost number_of_round \n(6) ./RTFPicture image \n(7) ./RTFPicture bd -ls\n(8) ./RTFPicture bd -add name\n(9) ./RTFPicture bd -addBatch name_array\n(10) ./RTFPicture bd -remove name\n(11) ./RTFPicture bd -modif name new_name\n");}
  else
  {
    if(argc >= 2)
    {
	  //deux argument:= 1er grey pour la fonction et le deuxième un nom d'image :appeler
        if((strcmp(argv[1],"grey"))==0)
        {
          SDL_Surface *surface=IMG_Load(argv[2]);
          goToGrey(surface);
        }
   // 2 argument:= 1er integral pour la fonction et le deuxième un nom d'image:appeler
        if((strcmp(argv[1],"integral"))==0)
        {
          SDL_Surface *surface=IMG_Load(argv[2]);
         int **arr= Integral(surface);
	  printf("%d\n%d\n", getpixel(surface,0,0), getpixel(surface,0,1));
          printf("%d\n",arr[0][1]);		
        }
//2 argument:= 1er haar pour la fonction et le deuxième un nom d'image:appeler
        if((strcmp(argv[1],"haar"))==0)
        {
          SDL_Surface *surface=IMG_Load(argv[2]);
          queue q=haarr2(surface);
	if(argc==4)
	  {printf("Le caractéristique %d vaut %d\n",atoi(argv[3]),search(q,atoi(argv[3])).res);}
        }

//2 argument 1er decision 2eme entier i: appeler
         if((strcmp(argv[1],"decision"))==0)
        {
          example* arr;
	  image *tab = malloc(797*sizeof(image));
          arr = weightImage(tab, 797, 797);
	  quickSort(arr, 0, 797,atoi(argv[2]));	
	  float *t = decision(arr,(atoi(argv[2])),797);
	
	  printf("%f|",t[0]);
	  printf("%f|",t[1]);
	  printf("%f|",t[2]);
	  printf("%f|",t[3]);
 	  printf("%f|",t[4]);
	  printf("\n");
        }
//2 argument adaboost pour la fonction entier T pour le nombre de tour:appeler
      if((strcmp(argv[1],"adaboost"))==0)
      {
        example* arr;
	    image *tab = malloc(797*sizeof(image));
	    arr=weightImage(tab, 797, 797);	
	    adaboost(arr,atoi(argv[2]),797);
      }
    if(argc == 2)
    {
      //1 argument 1er image pour la fonction:appeler
        if((strcmp(argv[1],"image"))==0)
        {
          example* arr;
	      image *tab = malloc(797*sizeof(image));
	      arr=weightImage(tab, 797, 797);
        }

    }
     // if(argc > 2)
      //{
        if(strcmp(argv[1], "bd") == 0)
        {
          CharacterInfo *c = NULL;
          c= ArrayData();
          char *a = "jerome", *b = "guillaume", *e= "valentin", *d = NULL;
          char **tab = malloc(4 * sizeof(a));
          tab[0] = a;
          tab[1] = b;
          tab[2] = e; 
          tab[3] = d;

          if(strcmp(argv[2],"-add")==0)
          {
            c=AddInfo(c, argv[3]);
          }

          if(strcmp(argv[2],"-addBatch")==0)
          {
            c=AddBatch(c, tab);
          }

          if(strcmp(argv[2], "-remove")==0)
          {
            c=RemoveInfo(c, argv[3]);
          }

          if(strcmp(argv[2] , "-modif")==0)
          {
            ModifInfo(c, argv[3], argv[4]);
          }

          if(strcmp(argv[2], "-ls")==0)
          {
            ShowList(c);
          }
        }
      //}
     /* else
    {
      printf("erreur arg");
    }*/
  }
  }
  return 0;
}

example* weightImage(image tab[], int len, int nb) 
{	
	 DIR* rep = NULL;
  rep = opendir("visage");
  example *array = malloc(sizeof(example) * nb);
  struct dirent* filel = NULL;
	int i =0;
        
    if(rep != NULL)
	{

		while(((filel = readdir(rep)) != NULL)&(i<299))
		{
			char file[20]="visage/";
			char *data = filel->d_name;
			if(data[0] != '.')
			{
				strcat(file,data);
				image picture;
				picture.name = file;
				tab[i]=picture;
				
				SDL_Surface *win = NULL;
				
				win = IMG_Load(tab[i].name);
				example e;
				e.feat = haarr2(win);
			   	e.label = 1;
			    	e.weight = 1/598.0;
				array[i] = e;
				SDL_FreeSurface(win);
				printf("%s\n", tab[i].name);
				i++;
			}
		}
	
	}

  
	closedir(rep);
  DIR* rep1 = NULL;
  rep1 = opendir("nonvisage");
  
   struct dirent* filel1 = NULL;
	 

    if(rep1 != NULL)
	{

		while(((filel1 = readdir(rep1)) != NULL)&(i<len))
		{
			char file[26]="nonvisage/";
			char *data = filel1->d_name;
			if(data[0] != '.')
			{
				strcat(file,data);
				image picture;
				picture.name = file;
				tab[i]=picture;
				SDL_Surface *win = NULL;
				win = IMG_Load(tab[i].name);
				example e;
				e.feat = haarr2(win);
			   	e.label = -1;
			    	e.weight = 1/998.0;
				array[i] = e;
				SDL_FreeSurface(win);
				printf("%s\n", tab[i].name);
				i++;
			}
		}
	
	}
	printf("%d\n",i);
  
	closedir(rep1);	
		
	
		
return array;}

queue haarr2(SDL_Surface *image)
{ 
   int nb=0;
   int nbtot=0;
    queue q = q_new();
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
				S1=(((a<0)||(b<0))?0:arr[a][b])-(((a<0)||(c<0))?0:arr[a][c])-(((d<0)||(b<0))?0:arr[d][b])+(((d<0)||(c<0))?0:arr[d][c]);
				S2=(((a<0)||(e<0))?0:arr[a][e])-(((a<0)||(b<0))?0:arr[a][b])-(((d<0)||(e<0))?0:arr[d][e])+(((d<0)||(b<0))?0:arr[d][b]);
				feat.res=S1-S2;
				enqueue(q,feat);
				nb++;
				nbtot++;
				
			}
		}
	}
    }
	printf("Il y a %d caractéristiques de type 1\n", nb);
	nb=0;

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
				nb++;
				nbtot++;
			}
		}
	}
    }
		printf("Il y a %d caractéristiques de type 2\n", nb);
		nb=0;
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
				nb++;
				nbtot++;
			}
		}
	}
    }
 		printf("Il y a %d caractéristiques de type 3\n", nb);
		nb=0;
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
				nb++;
				nbtot++;
			}
		}
	}
    }
		printf("Il y a %d caractéristiques de type 4\n", nb);
		nb=0;
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
				nb++;
				nbtot++;
			}
		}
	}
    }
	printf("Il y a %d caractéristiques de type 5\n", nb);
	printf("Il y a au total %d caractéristiques dans une image de taille 24*24\n", nbtot);
	return q;
    
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
	n = 2*feat.w*feat.h;
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
	n = 3*feat.w*feat.h;
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
	n = 4*feat.w*feat.h;
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


static inline void swap(example* a, example* b)
{
  example temp = *a;
  *a = *b;
  *b = temp;
}


int partitionner(example *tableau, int p, int r,int k) {
    int pivot = search(tableau[p].feat,k).res, i = p-1, j = r+1;
    while (1) {
        do
            j--;
        while (search(tableau[j].feat,k).res > pivot);
        do
            i++;
        while (search(tableau[i].feat,k).res  < pivot);
        if (i < j) {
            swap(tableau+i,tableau+j);
        }
        else
            return j;
    }
}

void quickSort(example *tableau, int p, int r,int k) {
    int q;
    if (p < r) {
        q = partitionner(tableau, p, r,k);
        quickSort(tableau, p, q,k);
        quickSort(tableau, q+1, r,k);
    }
}
/*static inline
int is_sorted(example *begin, example *end,int j) {
  for (; begin < end - 1 && search((*begin).feat,j).res <= search((*(begin + 1)).feat,j).res; begin++) {}
  return begin == end - 1;
}*/


float* decision(example* arr, int j, int n)
{	
    
    float *ar = malloc(sizeof(float) * 5);
    float treshold = (search(arr[0].feat,j).res)-1.0;
    float margin = 0.0;
    float error = 2.0;
    float toggle = 1.0;
    float w1=0;
    float w2=0;
    float w3=0;
    float w4=0;
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
   
    int k = 0;
    float nmargin = margin;
    float ntreshold = treshold;
    float nerror;
    float errorp;
    float errorm;
    float ntoggle;

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
      if((nerror < error) || ((nerror == error) && (nmargin > margin)))
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
        ntreshold = ((search(arr[k].feat,j).res)+(search(arr[k+1].feat,j).res))/2.0;
        nmargin = (search(arr[k+1].feat,j).res) - (search(arr[k].feat,j).res);
      }
    }
    ar[0] = treshold;
    ar[1] = toggle;
    ar[2] = error;
    ar[3] = margin;
    ar[4] =j;
    return ar;
}
int evaluate(float *tab,feature f)
{
   if((f.res>=tab[0])&&(tab[1]==1))
	{
		return 1;
	}
   if((f.res<tab[0])&&(tab[1]==1))
	{
		return -1;
	}
 if((f.res>=tab[0])&&(tab[1]==-1))
	{
		return -1;
	}
   if((f.res<tab[0])&&(tab[1]==-1))
	{
		return 1;
	}
return 0;
   
}

float *Beststump (example* arr,int d,int n)
{
	float *ar = malloc(sizeof(int)*5);
	ar[2]=2;
	ar[3]=0;
	
	for (int i=0; i<d; i++)
	{	
		quickSort(arr,0,320,i);
		
		printf("%d\n",i);
		float *ar2 = decision(arr,i,n);
		if(((ar2[2]<ar[2]))||(((ar2[3]>ar[3])&&(ar2[2]==ar[2]))))
		{
				ar[0]=ar2[0];
				ar[1]=ar2[1];
				ar[2]=ar2[2];
				ar[3]=ar2[3];
				ar[4]=i;
			
		}

	}
  return ar;
}

void adaboost(example* arr, int T,int n)
{ 
	FILE* file = NULL;
  	file = fopen("strongClassifieur.txt", "r+");
  
 
    
 
	for(int i=0;i<T;i++)
	{
           printf("%d",i);
	   float error=0;
	   float *tab= Beststump(arr,162335,n);
	    for(int j=0;j<n;j++)
		{
			if(evaluate(tab,search(arr[j].feat,tab[4]))!=arr[j].label)
	            error=error+arr[j].weight;
		

		}
		
	    if((error==0)&(T==1))
  	    {
                  	if(file != NULL)
  			{
   			for(int i=0; i<5; i++)
   			{
    			  fputc('|',file);
    			  fprintf(file, "%f", tab[i]);
   			}
   			fprintf(file, "\n");}
  	    }
	    else
	        {
		    float coeff=(1.0/2.0)*(log((1.0-error)/error));
		    for(int i=n-2;i>0;i--)
		    {
		            if(evaluate(tab,search(arr[i].feat,tab[4]))!=arr[i].label)
			    {arr[i+1].weight=((arr[i].weight)/2.0)*(1.0/error);}
				else
			    {arr[i+1].weight=((arr[i].weight)/2.0)*(1.0/(1.0-error));}
			    
			 }
	if(file != NULL)
  			 {
   			   for(int i=0; i<5; i++)
   			  {
    			   fputc('|',file);
    			   fprintf(file, "%f", tab[i]);
   			   }
			   fputc('|',file);
			   fprintf(file,"%f",coeff);
   			   fprintf(file, "\n");}
		  
		}
    	
	
	}
	fclose(file);	
}

