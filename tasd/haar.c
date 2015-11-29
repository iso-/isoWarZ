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
 /*
  if(argc < 2)
  {
    printf("manque arg");
  }
  else
  {
    if(argc >= 3)
    {
    */
	  //deux argument:= 1er grey pour la fonction et le deuxième un nom d'image :appeler
      /*  if((strcmp(argv[1],"grey"))==0)
        {
          SDL_Surface *surface=IMG_Load(argv[2]);
          goToGrey(surface);*/
	  /*example* arr;
	      image *tab = malloc(797*sizeof(image));
         arr=weightImage(tab, 797, 797);
	  float tab1[4]={-972.0,-1.0,0.222619,24.0};
	  float tab2[4]={3564.0,1.0,0.204066,24.0};
	  float tab3[4]={-1165.5,-1.0,0.198428,21.0};
	  float tab4[4]={1310.0,1.0,0.209290,20.0};
	  float tab5[4]={751.5,1.0,0.199548,9.0};
	  float tab6[4]={1190.0,1.0,0.204657,20.0};
	  float tab7[4]={8061.5,1.0,0.178388,23.0};
	  float tab8[4]={-504.0,-1.0,0.214318,16.0};
	  float tab9[4]={-4092.0,-1.0,0.170897,24.0};
	  float tab10[4]={-298.5,-1.0,0.178046,3.0};
	  float tab11[4]={6309.0,1.0,0.144317,18.0};
	  float tab12[4]={143.5,1.0,0.157750,7.0};
	  float tab13[4]={4826.0,1.0,0.248784,38.0};
	  float tab14[4]={-4212.0,-1.0,0.181252,24.0};
	  float tab15[4]={-1092.0,-1.0,0.191624,24.0};
	  float tab16[4]={8412.0,1.0,0.109095,24.0};
    float tab17[4]={112.5,1.0,0.104319,3.0};
	  float tab18[4]={-175.5,-1.0,0.166597,1.0};
	  float tab19[4]={4109.0,1.0,0.140488,42.0};
	  float tab20[4]={3173.0,1.0,0.158814,38.0};
	  float tab21[4]={1914.0,1.0,0.133727,12.0};
	  float tab22[4]={13.0,1.0,0.158362,2.0};
	  float tab23[4]={262.5,1.0,0.149735,5.0};
	  //evaluation prend en param: example *arr, int i(ieme image)
		// creer nb = nbligne dans fichier ,tab, lis dans le fichier et le remplis (avec serateurs...)
		// creer float = tab[4] * evaluate(tab, arr[i].feat[tab[3]])
	  for(int z=0;z<797;z++)
	  {float a=0.630079*evaluate(tab1,arr[z].feat[81095]);
	  float b=0.692751*evaluate(tab2,arr[z].feat[103319]);
	  float c=0.702541*evaluate(tab3,arr[z].feat[81556]);
	  float d=0.672720*evaluate(tab4,arr[z].feat[105231]);
	  float e=0.699813*evaluate(tab5,arr[z].feat[109008]);
	  float f=0.685823*evaluate(tab6,arr[z].feat[105342]);
	  float g=0.772684*evaluate(tab7,arr[z].feat[99628]);
	  float h=0.654340*evaluate(tab8,arr[z].feat[85502]);
	  float i=0.796683*evaluate(tab9,arr[z].feat[77819]);
	  float j=0.770885*evaluate(tab10,arr[z].feat[72880]);
	  float k=0.900025*evaluate(tab11,arr[z].feat[99926]);
	  float l=0.843853*evaluate(tab12,arr[z].feat[110235]);
	  float m=0.557756*evaluate(tab13,arr[z].feat[99462]);
	  float n=0.756812*evaluate(tab14,arr[z].feat[77819]);
          float o=0.726207*evaluate(tab15,arr[z].feat[77771]);
	  float p=1.068905*evaluate(tab16,arr[z].feat[99467]);
	  float q=1.084687*evaluate(tab17,arr[z].feat[110324]);
	  float r=0.804995*evaluate(tab18,arr[z].feat[72632]);
	  float s=0.915483*evaluate(tab19,arr[z].feat[95971]);
	  float t=0.840918*evaluate(tab20,arr[z].feat[99757]);
	  float u=0.943950*evaluate(tab21,arr[z].feat[106812]);
	  float v=0.840947*evaluate(tab22,arr[z].feat[110893]);
	  float w=0.881422*evaluate(tab23,arr[z].feat[108866]);

	  printf("%f\n",a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w);}*/
       // }
   // 2 argument:= 1er integral pour la fonction et le deuxième un nom d'image:appeler
       /* if((strcmp(argv[1],"integral"))==0)
        {
          SDL_Surface *surface=IMG_Load(argv[2]);
         int **arr= Integral(surface);
	  printf("%d\n%d\n", getpixel(surface,0,0), getpixel(surface,0,1));
          printf("%d\n",arr[0][1]);		
        }*/
//2 argument:= 1er haar pour la fonction et le deuxième un nom d'image:appeler
        //if((strcmp(argv[1],"haar"))==0)
        //{	
	   /*example* arr;
	   image *tab = malloc(797*sizeof(image));
           arr=weightImage(tab, 797, 797);
	  cascade(arr,0.1,20,0.1,0.1);*/
		SDL_Surface *surf=IMG_Load("R1.gif");
		//int **arr2 = Integral(surf);
		
		//feature *tab = malloc(sizeof(feature)*162336);
		 //haarr2(surf,tab,arr);	
		//SDL_Surface *surf2=IMG_Load("face0002.png");
		//haarr2(surf2,tab);
		//printf("%d\n", tab[121589].res);
		//free(tab);
	//printf("%d\n", scaling(surf,tab[121589],30,arr));
		//drawEmptyRect(surf,0,0,250,250,0,0,0);
		//printf("%d",attentionalCascade(tab,surf,24,arr));	
		//SDL_Surface *surf=IMG_Load("icon2.bmp");
		 //feature *arr= haarr2(surf);
		//printf("%d\n", arr[0].res);
	//printf("%d\n", scaling(surf,arr[0],24));
		//drawEmptyRect(surf,0,0,250,250,0,0,0);
		detect(surf);
		
		SDL_FreeSurface(surf);
		//free(arr[0]);
		//free(arr);
         //SDL_Surface *surface=IMG_Load(argv[2]);
        
		//int **arr = Integral(surface);
	/*if(argc==4)
	  {printf("Le caractéristique %d vaut %d\n",atoi(argv[3]),(q[atoi(argv[3])]).res);}*/
	 //printf("%d\n",eval(0,arr,0));
        //}

//2 argument 1er decision 2eme entier i: appeler
       /*  if((strcmp(argv[1],"decision"))==0)
        {
          example* arr;
	      image *tab = malloc(797*sizeof(image));
         arr=weightImage(tab, 797, 797);
	quickSort(arr,0,796,atoi(argv[2]));	
	     float *t=decision(arr,(atoi(argv[2])),796);
	
	printf("%f|",t[0]);
	printf("%f|",t[1]);
	printf("%f|",t[2]);
	printf("%f|",t[3]);
	printf("%f|",t[4]);
	printf("\n");
        }*/
//2 argument adaboost pour la fonction entier T pour le nombre de tour:appeler
      /*if((strcmp(argv[1],"adaboost"))==0)
      {
        example* arr;
	    image *tab = malloc(797*sizeof(image));
	    arr=weightImage(tab, 797, 797);	
	    adaboost(arr,atoi(argv[2]),320);
      }*/
   // if(argc == 2)
   // {
      //1 argument 1er image pour la fonction:appeler
       /* if((strcmp(argv[1],"image"))==0)
        {
          example* arr;
	      image *tab = malloc(797*sizeof(image));
	      arr=weightImage(tab, 797, 797);
        }*/

   /* }
      if(argc > 2)
      {
      */
       /* if(strcmp(argv[1], "bd") == 0)
        {
          CharacterInfo *c = NULL;
          c= ArrayData();
          char *a = "jerome", *b = "guillaume", *e= "valentin", *d = NULL;
          char **tab = malloc(4 * sizeof(a));
          tab[0] = a;
          tab[1] = b;
          tab[2] = e; 
          tab[3] = d;
          printf("enter\n\n\n"); 

          if(strcmp(argv[2],"-add")==0)
          {
            printf("addddddddddddddddddd!");
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
          }*/
       /* }
      }
      else
    {
      printf("erreur arg");
    }
  }*/
  //}
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
				//e.feat = haarr2(win);
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
				//e.feat = haarr2(win);
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

void haarr2(SDL_Surface *image, feature *tab)
{ 
   int nb=0;
   int nbtot=0;
    int **arr = Integral(image);
    int a,b,c,d,e,f;
    int S1, S2,S3,S4;

    for(int i=0; i<24; i++)
    {
	for(int j=0; j<24; j++)
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
				//enqueue(q,feat);
				nb++;
				tab[nbtot]=feat;
				nbtot++;
				
			}
		}
	}
    }
	//printf("Il y a %d caractéristiques de type 1\n", nb);
	nb=0;

    for(int i=0; i<24; i++)
    {
	for(int j=0; j<24; j++)
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
				//enqueue(q,feat);
				nb++;
				tab[nbtot]=feat;
				nbtot++;
			}
		}
	}
    }
	//	printf("Il y a %d caractéristiques de type 2\n", nb);
		nb=0;
    for(int i=0; i<24; i++)
    {
	for(int j=0; j<24; j++)
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
				//enqueue(q,feat);
				nb++;
				tab[nbtot]=feat;
				nbtot++;
			}
		}
	}
    }
 		//printf("Il y a %d caractéristiques de type 3\n", nb);
		nb=0;
    for(int i=0; i<24; i++)
    {
	for(int j=0; j<24; j++)
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
				//enqueue(q,feat);
				nb++;
				tab[nbtot]=feat;
				nbtot++;
			}
		}
	}
    }
		//printf("Il y a %d caractéristiques de type 4\n", nb);
		nb=0;
    for(int i=0; i<24; i++)
    {
	for(int j=0; j<24; j++)
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
				//enqueue(q,feat);
				tab[nbtot]=feat;
				nb++;
				nbtot++;
			}
		}
	}
    }
	//printf("Il y a %d caractéristiques de type 5\n", nb);
	printf("Il y a au total %d caractéristiques\n", nbtot);

	free(arr[0]);	
	free(arr);
}


int scaling(SDL_Surface *image, feature feat,int t)
{ 
    int a,b,c,d,e,f;
    
    int n,w,i,j,h;
    int **arr = Integral(image);

    if(feat.t == 1)
    {
	int x = 1;
	n = 2*feat.w*feat.h;
	i = (int)(round((feat.i*t)/24));
	j = (int)(round((feat.j*t)/24));
	h = (int)(round((feat.h*t)/24));
	while(x < (((int)(round(1+(2*feat.w*t)/24)))/2)&& 2*x<((t-j+1)))
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
	i = (int)(round((feat.i*t)/24));
	j = (int)(round((feat.j*t)/24));
	h = (int)(round((feat.h*t)/24));
	n = 3*feat.w*feat.h;
	while(x < (((int)(round(1+(3*feat.w*t)/24)))/3)&& 3*x<((t-j+1)))
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
	i = (int)(round((feat.i*t)/24));
	j = (int)(round((feat.j*t)/24));
	w = (int)(round((feat.w*t)/24));
	n = 2*feat.w*feat.h;
	while(x < (((int)(round(1+(2*feat.h*t)/24)))/2)&& 2*x<((t-j+1)))
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
	i = (int)(round((feat.i*t)/24));
	j = (int)(round((feat.j*t)/24));
	w = (int)(round((feat.w*t)/24));
	n = 3*feat.w*feat.h;
	while(x < (((int)(round(1+(3*feat.h*t)/24)))/3)&& 3*x<((t-j+1)))
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
	i = (int)(round((feat.i*t)/24));
	j = (int)(round((feat.j*t)/24));
	n = 4*feat.w*feat.h;
	while(x < (((int)(round(1+(2*feat.h*t)/24)))/2)&& 2*x<((t-j+1)))
	{
	    x++;
	}
	h=x;
	x=1;	
	while(x < (((int)(round(1+(2*feat.w*t)/24)))/2)&& 2*x<((t-j+1)))
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
	free(arr[0]);
  free(arr);
    return ((S1-S2-S3+S4)*n)/(4*w*h);
    }
  free(arr[0]);
  free(arr);
  return 0;
}


static inline void swap(example* a, example* b)
{
  example temp = *a;
  *a = *b;
  *b = temp;
}


int partitionner(example *tableau, int p, int r,int k) {
    int pivot = (tableau[p].feat[k]).res, i = p-1, j = r+1;
    int temp;
    while (1) {
        do
            j--;
        while ((tableau[j].feat[k]).res > pivot);
        do
            i++;
        while ((tableau[i].feat[k]).res  < pivot);
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
    float treshold = ((arr[0].feat[j]).res)-1.0;
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
        if((((arr[i].feat)[j]).res) > treshold)
        {
          w1 = w1 + arr[i].weight;
        }
      }
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i].label == -1)
      {
        if((((arr[i].feat)[j]).res) > treshold)
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
        if((k==n) || (((arr[k].feat[j]).res) != ((arr[k+1].feat[j]).res)))
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
        ntreshold = ((arr[n-1].feat[j]).res);
        nmargin = 0;
      }
      else
      {
        ntreshold = (((arr[k].feat[j]).res)+((arr[k+1].feat[j]).res))/2.0;
        nmargin = ((arr[k+1].feat[j]).res) - ((arr[k].feat[j]).res);
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
/*int evaluate2(float *tab,int f)
{
   if((f>=tab[0])&&(tab[1]==1))
	{
		return 1;
	}
   if((f<tab[0])&&(tab[1]==1))
	{
		return -1;
	}
 if((f>=tab[0])&&(tab[1]==-1))
	{
		return -1;
	}
   if((f<tab[0])&&(tab[1]==-1))
	{
		return 1;
	}
return 0;
   
}
*/


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
			if(evaluate(tab,(arr[j].feat[(int)tab[4]]))!=arr[j].label)
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
		            if(evaluate(tab,(arr[i].feat[(int)tab[4]]))!=arr[i].label)
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

example* positive(image tab[], int len, int nb) 
{	
  DIR* rep = NULL;
  rep = opendir("positive");
  example *array = malloc(sizeof(example) * nb);
  struct dirent* filel = NULL;
	int i =0;
        
    if(rep != NULL)
	{

		while(((filel = readdir(rep)) != NULL)&(i<nb))
		{
			char file[20]="positive/";
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
				//e.feat = haarr2(win);
				array[i] = e;
				SDL_FreeSurface(win);
				printf("%s\n", tab[i].name);
				i++;
			}
		}
	
	}

	closedir(rep);
	return array;
}

example* negative(image tab[], int len, int nb) 
{	
  DIR* rep = NULL;
  rep = opendir("negative");
  example *array = malloc(sizeof(example) * nb);
  struct dirent* filel = NULL;
	int i =0;
        
    if(rep != NULL)
	{

		while(((filel = readdir(rep)) != NULL)&(i<nb))
		{
			char file[20]="negative/";
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
				//e.feat = haarr2(win);
				array[i] = e;
				SDL_FreeSurface(win);
				printf("%s\n", tab[i].name);
				i++;
			}
		}
	
	}

	closedir(rep);
	return array;
}

int eval(int n,example* arr,int sl)
{
	FILE* fsrc;
	char buffer[128];
	
	if((fsrc = fopen("strongClassifieur.txt", "rb")) == NULL)
	{
		printf("error\n");
	}
	float s=0;	
	while ( fgets ( buffer, sizeof buffer, fsrc) != NULL ) /* read a line */
      	{
		
		int k = 0;
		size_t i = 1;
		int j=0;
		//printf("%c",buffer[i]);
        	while(buffer[i] != '\0')
		{//printf("%c",buffer[i]);
			float tab[6];
			char buffer2[64];
			if(buffer[i] == '|' || buffer[i+1] == '\0')
			{
				
				tab[k] = strtof(buffer2,NULL);
				//char buffer2[64] = "";
				//printf("|%s",buffer2);
				
				k++;	
				i++;
				j=0;
			if(k==6)
			{
				
				s=s+tab[5]*(evaluate(tab,arr[n].feat[(int)tab[4]])+sl);
			}
				
			}
			

				
				buffer2[j] =buffer[i];
				//printf("%c",buffer2[j]);
				i++;
				j++;
			
		
		}
		printf("\n");		 
      	}
      fclose (fsrc);
	//printf("%f",s);
	return s>0?1:-1;
}

int eval2(feature *feat, SDL_Surface *surf)
{
	FILE* fsrc;
	char buffer[128];
	
	if((fsrc = fopen("strongClassifieur.txt", "rb")) == NULL)
	{
		printf("error\n");
	}
	float s=0;	
	while ( fgets ( buffer, sizeof buffer, fsrc) != NULL ) /* read a line */
      	{
		
		int k = 0;
		size_t i = 1;
		int j=0;
		//printf("%c",buffer[i]);
        	while(buffer[i] != '\0')
		{//printf("%c",buffer[i]);
			float tab[6];
			char buffer2[64];
			if(buffer[i] == '|' || buffer[i+1] == '\0')
			{
				
				tab[k] = strtof(buffer2,NULL);
				//char buffer2[64] = "";
				//printf("|%s",buffer2);
				
				k++;	
				i++;
				j=0;
			if(k==6)
			{
				
				//s=s+tab[5]*(evaluate2(tab,scaling(surf,feat[(int)tab[4]],24)));
			}
				
			}
			

				
				buffer2[j] =buffer[i];
				//printf("%c",buffer2[j]);
				i++;
				j++;
			
		
		}
		printf("\n");		 
      	}
      fclose (fsrc);
	//printf("%f",s);
	return s>0?1:-1;
}

int evaluate2(float tab0, float tab1,int f)
{
   if((f>=tab0)&&(tab1==1))
	{
		return 1;
	}
   if((f<tab0)&&(tab1==1))
	{
		return -1;
	}
 if((f>=tab0)&&(tab1==-1))
	{
		return -1;
	}
   if((f<tab0)&&(tab1==-1))
	{
		return 1;
	}
return 0;
   
}
int attentionalCascade(feature *feat, SDL_Surface *surf,int i)
{
	float s=0;
	
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	//printf("%f",s);
	if(s < 0)
	{
		return -1;
	}
	
	s = 0;
	
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	if(s < 0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	if(s < 0)
	{
		return -1;
	}
	
	s =0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	if(s < 0)
	{
		return -1;
	}
	
	s =0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	if(s < 0)
	{
		return -1;
	}
	
	s =0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	if(s < 0)
	{
		return -1;
	}

	s =0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));	
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	if(s < 0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	if(s < 0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	if(s < 0)
	{
		return -1;
	}
	
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));
	if(s < 0)
	{
		return -1;
	}
	
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	if(s<0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	if(s<0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	if(s<0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	s=s+0.3675034026*(evaluate2(62749.7734375000,1.0,scaling(surf,feat[(int)50735.0],i)));
	s=s+0.3505956031*(evaluate2(-1514.5759277344,1.0,scaling(surf,feat[(int)83990.0],i)));
	s=s+0.3586792068*(evaluate2(-6482.2768554688,-1.0,scaling(surf,feat[(int)137643.0],i)));
	s=s+0.3454440077*(evaluate2(16106.556640625,-1.0,scaling(surf,feat[(int)114033.0],i)));
	s=s+0.2715000000*(evaluate2(142097.953125000,1.0,scaling(surf,feat[(int)5957.0],i)));
	s=s+0.3211744661*(evaluate2(-72745.222656250,-1.0,scaling(surf,feat[(int)92033.0],i)));	
	s=s+0.3367125021*(evaluate2(1621.2572631836,-1.0,scaling(surf,feat[(int)75819.0],i)));
	s=s+0.322410726*(evaluate2(433693.203125000,1.0,scaling(surf,feat[(int)121582.0],i)));
	s=s+0.3310741504*(evaluate2(16371.4794921875,-1.0,scaling(surf,feat[(int)108666.0],i)));
	s=s+0.3474687262*(evaluate2(10422.589843750,1.0,scaling(surf,feat[(int)112677.0],i)));
	if(s<0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	s=s+0.3675034026*(evaluate2(62749.7734375000,1.0,scaling(surf,feat[(int)50735.0],i)));
	s=s+0.3505956031*(evaluate2(-1514.5759277344,1.0,scaling(surf,feat[(int)83990.0],i)));
	s=s+0.3586792068*(evaluate2(-6482.2768554688,-1.0,scaling(surf,feat[(int)137643.0],i)));
	s=s+0.3454440077*(evaluate2(16106.556640625,-1.0,scaling(surf,feat[(int)114033.0],i)));
	s=s+0.2715000000*(evaluate2(142097.953125000,1.0,scaling(surf,feat[(int)5957.0],i)));
	s=s+0.3211744661*(evaluate2(-72745.222656250,-1.0,scaling(surf,feat[(int)92033.0],i)));	
	s=s+0.3367125021*(evaluate2(1621.2572631836,-1.0,scaling(surf,feat[(int)75819.0],i)));
	s=s+0.322410726*(evaluate2(433693.203125000,1.0,scaling(surf,feat[(int)121582.0],i)));
	s=s+0.3310741504*(evaluate2(16371.4794921875,-1.0,scaling(surf,feat[(int)108666.0],i)));
	s=s+0.3474687262*(evaluate2(10422.589843750,1.0,scaling(surf,feat[(int)112677.0],i)));
	s=s+0.3446514519*(evaluate2(-182463.8515625000,-1.0,scaling(surf,feat[(int)155355.0],i)));
	s=s+0.3380385451*(evaluate2(1950.3776855469,-1.0,scaling(surf,feat[(int)77700.0],i)));	
	s=s+0.3641823034*(evaluate2(132924.31250000,1.0,scaling(surf,feat[(int)72424.0],i)));
	s=s+0.3598318504*(evaluate2(3974.2299804688,-1.0,scaling(surf,feat[(int)90330.0],i)));
	s=s+0.3238117088*(evaluate2(363517.04687500,1.0,scaling(surf,feat[(int)27883.0],i)));
	s=s+0.3575199445*(evaluate2(-2022.587402343,1.0,scaling(surf,feat[(int)103620.0],i)));
	s=s+0.3597653144*(evaluate2(-109129.742187500,-1.0,scaling(surf,feat[(int)57575.0],i)));
	s=s+0.3628742629*(evaluate2(25391.6894531250,-1.0,scaling(surf,feat[(int)19741.0],i)));	
	s=s+0.355205019*(evaluate2(240154.679687500,1.0,scaling(surf,feat[(int)133083.0],i)));
	s=s+0.3685997732*(evaluate2(-70.758789062,-1.0,scaling(surf,feat[(int)156492.0],i)));
	if(s<0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	s=s+0.3675034026*(evaluate2(62749.7734375000,1.0,scaling(surf,feat[(int)50735.0],i)));
	s=s+0.3505956031*(evaluate2(-1514.5759277344,1.0,scaling(surf,feat[(int)83990.0],i)));
	s=s+0.3586792068*(evaluate2(-6482.2768554688,-1.0,scaling(surf,feat[(int)137643.0],i)));
	s=s+0.3454440077*(evaluate2(16106.556640625,-1.0,scaling(surf,feat[(int)114033.0],i)));
	s=s+0.2715000000*(evaluate2(142097.953125000,1.0,scaling(surf,feat[(int)5957.0],i)));
	s=s+0.3211744661*(evaluate2(-72745.222656250,-1.0,scaling(surf,feat[(int)92033.0],i)));	
	s=s+0.3367125021*(evaluate2(1621.2572631836,-1.0,scaling(surf,feat[(int)75819.0],i)));
	s=s+0.322410726*(evaluate2(433693.203125000,1.0,scaling(surf,feat[(int)121582.0],i)));
	s=s+0.3310741504*(evaluate2(16371.4794921875,-1.0,scaling(surf,feat[(int)108666.0],i)));
	s=s+0.3474687262*(evaluate2(10422.589843750,1.0,scaling(surf,feat[(int)112677.0],i)));
	s=s+0.3446514519*(evaluate2(-182463.8515625000,-1.0,scaling(surf,feat[(int)155355.0],i)));
	s=s+0.3380385451*(evaluate2(1950.3776855469,-1.0,scaling(surf,feat[(int)77700.0],i)));	
	s=s+0.3641823034*(evaluate2(132924.31250000,1.0,scaling(surf,feat[(int)72424.0],i)));
	s=s+0.3598318504*(evaluate2(3974.2299804688,-1.0,scaling(surf,feat[(int)90330.0],i)));
	s=s+0.3238117088*(evaluate2(363517.04687500,1.0,scaling(surf,feat[(int)27883.0],i)));
	s=s+0.3575199445*(evaluate2(-2022.587402343,1.0,scaling(surf,feat[(int)103620.0],i)));
	s=s+0.3597653144*(evaluate2(-109129.742187500,-1.0,scaling(surf,feat[(int)57575.0],i)));
	s=s+0.3628742629*(evaluate2(25391.6894531250,-1.0,scaling(surf,feat[(int)19741.0],i)));	
	s=s+0.355205019*(evaluate2(240154.679687500,1.0,scaling(surf,feat[(int)133083.0],i)));
	s=s+0.3685997732*(evaluate2(-70.758789062,-1.0,scaling(surf,feat[(int)156492.0],i)));
	s=s+0.3673430331*(evaluate2(-69.484375000,-1.0,scaling(surf,feat[(int)153030.0],i)));
	s=s+0.3640224773*(evaluate2(57.2971191406,1.0,scaling(surf,feat[(int)159096.0],i)));
	s=s+0.3699412625*(evaluate2(-57.4375000000,-1.0,scaling(surf,feat[(int)155238.0],i)));
	s=s+0.3734535817*(evaluate2(70.9438476562,1.0,scaling(surf,feat[(int)108656.0],i)));	
	s=s+0.3699007883*(evaluate2(2156.5136718750,-1.0,scaling(surf,feat[(int)106228.0],i)));
	s=s+0.3668281381*(evaluate2(62.680664062,1.0,scaling(surf,feat[(int)2976.0],i)));
	s=s+0.3695665421*(evaluate2(-64.6997070312,1.0,scaling(surf,feat[(int)154832.0],i)));
	s=s+0.3720073540*(evaluate2(-274751.32812500,-1.0,scaling(surf,feat[(int)47720.0],i)));
	s=s+0.353154903*(evaluate2(-1501.5483398438,1.0,scaling(surf,feat[(int)104940.0],i)));
	s=s+0.3630895727*(evaluate2(-34315.337890625,-1.0,scaling(surf,feat[(int)140439.0],i)));
	if(s<0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	s=s+0.3675034026*(evaluate2(62749.7734375000,1.0,scaling(surf,feat[(int)50735.0],i)));
	s=s+0.3505956031*(evaluate2(-1514.5759277344,1.0,scaling(surf,feat[(int)83990.0],i)));
	s=s+0.3586792068*(evaluate2(-6482.2768554688,-1.0,scaling(surf,feat[(int)137643.0],i)));
	s=s+0.3454440077*(evaluate2(16106.556640625,-1.0,scaling(surf,feat[(int)114033.0],i)));
	s=s+0.2715000000*(evaluate2(142097.953125000,1.0,scaling(surf,feat[(int)5957.0],i)));
	s=s+0.3211744661*(evaluate2(-72745.222656250,-1.0,scaling(surf,feat[(int)92033.0],i)));	
	s=s+0.3367125021*(evaluate2(1621.2572631836,-1.0,scaling(surf,feat[(int)75819.0],i)));
	s=s+0.322410726*(evaluate2(433693.203125000,1.0,scaling(surf,feat[(int)121582.0],i)));
	s=s+0.3310741504*(evaluate2(16371.4794921875,-1.0,scaling(surf,feat[(int)108666.0],i)));
	s=s+0.3474687262*(evaluate2(10422.589843750,1.0,scaling(surf,feat[(int)112677.0],i)));
	s=s+0.3446514519*(evaluate2(-182463.8515625000,-1.0,scaling(surf,feat[(int)155355.0],i)));
	s=s+0.3380385451*(evaluate2(1950.3776855469,-1.0,scaling(surf,feat[(int)77700.0],i)));	
	s=s+0.3641823034*(evaluate2(132924.31250000,1.0,scaling(surf,feat[(int)72424.0],i)));
	s=s+0.3598318504*(evaluate2(3974.2299804688,-1.0,scaling(surf,feat[(int)90330.0],i)));
	s=s+0.3238117088*(evaluate2(363517.04687500,1.0,scaling(surf,feat[(int)27883.0],i)));
	s=s+0.3575199445*(evaluate2(-2022.587402343,1.0,scaling(surf,feat[(int)103620.0],i)));
	s=s+0.3597653144*(evaluate2(-109129.742187500,-1.0,scaling(surf,feat[(int)57575.0],i)));
	s=s+0.3628742629*(evaluate2(25391.6894531250,-1.0,scaling(surf,feat[(int)19741.0],i)));	
	s=s+0.355205019*(evaluate2(240154.679687500,1.0,scaling(surf,feat[(int)133083.0],i)));
	s=s+0.3685997732*(evaluate2(-70.758789062,-1.0,scaling(surf,feat[(int)156492.0],i)));
	s=s+0.3673430331*(evaluate2(-69.484375000,-1.0,scaling(surf,feat[(int)153030.0],i)));
	s=s+0.3640224773*(evaluate2(57.2971191406,1.0,scaling(surf,feat[(int)159096.0],i)));
	s=s+0.3699412625*(evaluate2(-57.4375000000,-1.0,scaling(surf,feat[(int)155238.0],i)));
	s=s+0.3734535817*(evaluate2(70.9438476562,1.0,scaling(surf,feat[(int)108656.0],i)));	
	s=s+0.3699007883*(evaluate2(2156.5136718750,-1.0,scaling(surf,feat[(int)106228.0],i)));
	s=s+0.3668281381*(evaluate2(62.680664062,1.0,scaling(surf,feat[(int)2976.0],i)));
	s=s+0.3695665421*(evaluate2(-64.6997070312,1.0,scaling(surf,feat[(int)154832.0],i)));
	s=s+0.3720073540*(evaluate2(-274751.32812500,-1.0,scaling(surf,feat[(int)47720.0],i)));
	s=s+0.353154903*(evaluate2(-1501.5483398438,1.0,scaling(surf,feat[(int)104940.0],i)));
	s=s+0.3630895727*(evaluate2(-34315.337890625,-1.0,scaling(surf,feat[(int)140439.0],i)));
	if(s<0)
	{
		return -1;
	}

	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	s=s+0.3675034026*(evaluate2(62749.7734375000,1.0,scaling(surf,feat[(int)50735.0],i)));
	s=s+0.3505956031*(evaluate2(-1514.5759277344,1.0,scaling(surf,feat[(int)83990.0],i)));
	s=s+0.3586792068*(evaluate2(-6482.2768554688,-1.0,scaling(surf,feat[(int)137643.0],i)));
	s=s+0.3454440077*(evaluate2(16106.556640625,-1.0,scaling(surf,feat[(int)114033.0],i)));
	s=s+0.2715000000*(evaluate2(142097.953125000,1.0,scaling(surf,feat[(int)5957.0],i)));
	s=s+0.3211744661*(evaluate2(-72745.222656250,-1.0,scaling(surf,feat[(int)92033.0],i)));	
	s=s+0.3367125021*(evaluate2(1621.2572631836,-1.0,scaling(surf,feat[(int)75819.0],i)));
	s=s+0.322410726*(evaluate2(433693.203125000,1.0,scaling(surf,feat[(int)121582.0],i)));
	s=s+0.3310741504*(evaluate2(16371.4794921875,-1.0,scaling(surf,feat[(int)108666.0],i)));
	s=s+0.3474687262*(evaluate2(10422.589843750,1.0,scaling(surf,feat[(int)112677.0],i)));
	s=s+0.3446514519*(evaluate2(-182463.8515625000,-1.0,scaling(surf,feat[(int)155355.0],i)));
	s=s+0.3380385451*(evaluate2(1950.3776855469,-1.0,scaling(surf,feat[(int)77700.0],i)));	
	s=s+0.3641823034*(evaluate2(132924.31250000,1.0,scaling(surf,feat[(int)72424.0],i)));
	s=s+0.3598318504*(evaluate2(3974.2299804688,-1.0,scaling(surf,feat[(int)90330.0],i)));
	s=s+0.3238117088*(evaluate2(363517.04687500,1.0,scaling(surf,feat[(int)27883.0],i)));
	s=s+0.3575199445*(evaluate2(-2022.587402343,1.0,scaling(surf,feat[(int)103620.0],i)));
	s=s+0.3597653144*(evaluate2(-109129.742187500,-1.0,scaling(surf,feat[(int)57575.0],i)));
	s=s+0.3628742629*(evaluate2(25391.6894531250,-1.0,scaling(surf,feat[(int)19741.0],i)));	
	s=s+0.355205019*(evaluate2(240154.679687500,1.0,scaling(surf,feat[(int)133083.0],i)));
	s=s+0.3685997732*(evaluate2(-70.758789062,-1.0,scaling(surf,feat[(int)156492.0],i)));
	s=s+0.3673430331*(evaluate2(-69.484375000,-1.0,scaling(surf,feat[(int)153030.0],i)));
	s=s+0.3640224773*(evaluate2(57.2971191406,1.0,scaling(surf,feat[(int)159096.0],i)));
	s=s+0.3699412625*(evaluate2(-57.4375000000,-1.0,scaling(surf,feat[(int)155238.0],i)));
	s=s+0.3734535817*(evaluate2(70.9438476562,1.0,scaling(surf,feat[(int)108656.0],i)));	
	s=s+0.3699007883*(evaluate2(2156.5136718750,-1.0,scaling(surf,feat[(int)106228.0],i)));
	s=s+0.3668281381*(evaluate2(62.680664062,1.0,scaling(surf,feat[(int)2976.0],i)));
	s=s+0.3695665421*(evaluate2(-64.6997070312,1.0,scaling(surf,feat[(int)154832.0],i)));
	s=s+0.3720073540*(evaluate2(-274751.32812500,-1.0,scaling(surf,feat[(int)47720.0],i)));
	s=s+0.353154903*(evaluate2(-1501.5483398438,1.0,scaling(surf,feat[(int)104940.0],i)));
	s=s+0.3630895727*(evaluate2(-34315.337890625,-1.0,scaling(surf,feat[(int)140439.0],i)));
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	s=s+0.3675034026*(evaluate2(62749.7734375000,1.0,scaling(surf,feat[(int)50735.0],i)));
	s=s+0.3505956031*(evaluate2(-1514.5759277344,1.0,scaling(surf,feat[(int)83990.0],i)));
	s=s+0.3586792068*(evaluate2(-6482.2768554688,-1.0,scaling(surf,feat[(int)137643.0],i)));
	s=s+0.3454440077*(evaluate2(16106.556640625,-1.0,scaling(surf,feat[(int)114033.0],i)));
	s=s+0.2715000000*(evaluate2(142097.953125000,1.0,scaling(surf,feat[(int)5957.0],i)));
	s=s+0.3211744661*(evaluate2(-72745.222656250,-1.0,scaling(surf,feat[(int)92033.0],i)));	
	s=s+0.3367125021*(evaluate2(1621.2572631836,-1.0,scaling(surf,feat[(int)75819.0],i)));
	s=s+0.322410726*(evaluate2(433693.203125000,1.0,scaling(surf,feat[(int)121582.0],i)));
	s=s+0.3310741504*(evaluate2(16371.4794921875,-1.0,scaling(surf,feat[(int)108666.0],i)));
	s=s+0.3474687262*(evaluate2(10422.589843750,1.0,scaling(surf,feat[(int)112677.0],i)));
	s=s+0.3446514519*(evaluate2(-182463.8515625000,-1.0,scaling(surf,feat[(int)155355.0],i)));
	s=s+0.3380385451*(evaluate2(1950.3776855469,-1.0,scaling(surf,feat[(int)77700.0],i)));	
	s=s+0.3641823034*(evaluate2(132924.31250000,1.0,scaling(surf,feat[(int)72424.0],i)));
	s=s+0.3598318504*(evaluate2(3974.2299804688,-1.0,scaling(surf,feat[(int)90330.0],i)));
	s=s+0.3238117088*(evaluate2(363517.04687500,1.0,scaling(surf,feat[(int)27883.0],i)));
	s=s+0.3575199445*(evaluate2(-2022.587402343,1.0,scaling(surf,feat[(int)103620.0],i)));
	s=s+0.3597653144*(evaluate2(-109129.742187500,-1.0,scaling(surf,feat[(int)57575.0],i)));
	s=s+0.3628742629*(evaluate2(25391.6894531250,-1.0,scaling(surf,feat[(int)19741.0],i)));	
	s=s+0.355205019*(evaluate2(240154.679687500,1.0,scaling(surf,feat[(int)133083.0],i)));
	s=s+0.3685997732*(evaluate2(-70.758789062,-1.0,scaling(surf,feat[(int)156492.0],i)));
	s=s+0.3673430331*(evaluate2(-69.484375000,-1.0,scaling(surf,feat[(int)153030.0],i)));
	s=s+0.3640224773*(evaluate2(57.2971191406,1.0,scaling(surf,feat[(int)159096.0],i)));
	s=s+0.3699412625*(evaluate2(-57.4375000000,-1.0,scaling(surf,feat[(int)155238.0],i)));
	s=s+0.3734535817*(evaluate2(70.9438476562,1.0,scaling(surf,feat[(int)108656.0],i)));	
	s=s+0.3699007883*(evaluate2(2156.5136718750,-1.0,scaling(surf,feat[(int)106228.0],i)));
	s=s+0.3668281381*(evaluate2(62.680664062,1.0,scaling(surf,feat[(int)2976.0],i)));
	s=s+0.3695665421*(evaluate2(-64.6997070312,1.0,scaling(surf,feat[(int)154832.0],i)));
	s=s+0.3720073540*(evaluate2(-274751.32812500,-1.0,scaling(surf,feat[(int)47720.0],i)));
	s=s+0.353154903*(evaluate2(-1501.5483398438,1.0,scaling(surf,feat[(int)104940.0],i)));
	s=s+0.3630895727*(evaluate2(-34315.337890625,-1.0,scaling(surf,feat[(int)140439.0],i)));
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	s=s+0.3675034026*(evaluate2(62749.7734375000,1.0,scaling(surf,feat[(int)50735.0],i)));
	s=s+0.3505956031*(evaluate2(-1514.5759277344,1.0,scaling(surf,feat[(int)83990.0],i)));
	s=s+0.3586792068*(evaluate2(-6482.2768554688,-1.0,scaling(surf,feat[(int)137643.0],i)));
	s=s+0.3454440077*(evaluate2(16106.556640625,-1.0,scaling(surf,feat[(int)114033.0],i)));
	s=s+0.2715000000*(evaluate2(142097.953125000,1.0,scaling(surf,feat[(int)5957.0],i)));
	s=s+0.3211744661*(evaluate2(-72745.222656250,-1.0,scaling(surf,feat[(int)92033.0],i)));	
	s=s+0.3367125021*(evaluate2(1621.2572631836,-1.0,scaling(surf,feat[(int)75819.0],i)));
	s=s+0.322410726*(evaluate2(433693.203125000,1.0,scaling(surf,feat[(int)121582.0],i)));
	s=s+0.3310741504*(evaluate2(16371.4794921875,-1.0,scaling(surf,feat[(int)108666.0],i)));
	s=s+0.3474687262*(evaluate2(10422.589843750,1.0,scaling(surf,feat[(int)112677.0],i)));
	s=s+0.3446514519*(evaluate2(-182463.8515625000,-1.0,scaling(surf,feat[(int)155355.0],i)));
	s=s+0.3380385451*(evaluate2(1950.3776855469,-1.0,scaling(surf,feat[(int)77700.0],i)));	
	s=s+0.3641823034*(evaluate2(132924.31250000,1.0,scaling(surf,feat[(int)72424.0],i)));
	s=s+0.3598318504*(evaluate2(3974.2299804688,-1.0,scaling(surf,feat[(int)90330.0],i)));
	s=s+0.3238117088*(evaluate2(363517.04687500,1.0,scaling(surf,feat[(int)27883.0],i)));
	s=s+0.3575199445*(evaluate2(-2022.587402343,1.0,scaling(surf,feat[(int)103620.0],i)));
	s=s+0.3597653144*(evaluate2(-109129.742187500,-1.0,scaling(surf,feat[(int)57575.0],i)));
	s=s+0.3628742629*(evaluate2(25391.6894531250,-1.0,scaling(surf,feat[(int)19741.0],i)));	
	s=s+0.355205019*(evaluate2(240154.679687500,1.0,scaling(surf,feat[(int)133083.0],i)));
	s=s+0.3685997732*(evaluate2(-70.758789062,-1.0,scaling(surf,feat[(int)156492.0],i)));
	s=s+0.3673430331*(evaluate2(-69.484375000,-1.0,scaling(surf,feat[(int)153030.0],i)));
	s=s+0.3640224773*(evaluate2(57.2971191406,1.0,scaling(surf,feat[(int)159096.0],i)));
	s=s+0.3699412625*(evaluate2(-57.4375000000,-1.0,scaling(surf,feat[(int)155238.0],i)));
	s=s+0.3734535817*(evaluate2(70.9438476562,1.0,scaling(surf,feat[(int)108656.0],i)));	
	s=s+0.3699007883*(evaluate2(2156.5136718750,-1.0,scaling(surf,feat[(int)106228.0],i)));
	s=s+0.3668281381*(evaluate2(62.680664062,1.0,scaling(surf,feat[(int)2976.0],i)));
	s=s+0.3695665421*(evaluate2(-64.6997070312,1.0,scaling(surf,feat[(int)154832.0],i)));
	s=s+0.3720073540*(evaluate2(-274751.32812500,-1.0,scaling(surf,feat[(int)47720.0],i)));
	s=s+0.353154903*(evaluate2(-1501.5483398438,1.0,scaling(surf,feat[(int)104940.0],i)));
	s=s+0.3630895727*(evaluate2(-34315.337890625,-1.0,scaling(surf,feat[(int)140439.0],i)));
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	s=s+0.3675034026*(evaluate2(62749.7734375000,1.0,scaling(surf,feat[(int)50735.0],i)));
	s=s+0.3505956031*(evaluate2(-1514.5759277344,1.0,scaling(surf,feat[(int)83990.0],i)));
	s=s+0.3586792068*(evaluate2(-6482.2768554688,-1.0,scaling(surf,feat[(int)137643.0],i)));
	s=s+0.3454440077*(evaluate2(16106.556640625,-1.0,scaling(surf,feat[(int)114033.0],i)));
	s=s+0.2715000000*(evaluate2(142097.953125000,1.0,scaling(surf,feat[(int)5957.0],i)));
	s=s+0.3211744661*(evaluate2(-72745.222656250,-1.0,scaling(surf,feat[(int)92033.0],i)));	
	s=s+0.3367125021*(evaluate2(1621.2572631836,-1.0,scaling(surf,feat[(int)75819.0],i)));
	s=s+0.322410726*(evaluate2(433693.203125000,1.0,scaling(surf,feat[(int)121582.0],i)));
	s=s+0.3310741504*(evaluate2(16371.4794921875,-1.0,scaling(surf,feat[(int)108666.0],i)));
	s=s+0.3474687262*(evaluate2(10422.589843750,1.0,scaling(surf,feat[(int)112677.0],i)));
	s=s+0.3446514519*(evaluate2(-182463.8515625000,-1.0,scaling(surf,feat[(int)155355.0],i)));
	s=s+0.3380385451*(evaluate2(1950.3776855469,-1.0,scaling(surf,feat[(int)77700.0],i)));	
	s=s+0.3641823034*(evaluate2(132924.31250000,1.0,scaling(surf,feat[(int)72424.0],i)));
	s=s+0.3598318504*(evaluate2(3974.2299804688,-1.0,scaling(surf,feat[(int)90330.0],i)));
	s=s+0.3238117088*(evaluate2(363517.04687500,1.0,scaling(surf,feat[(int)27883.0],i)));
	s=s+0.3575199445*(evaluate2(-2022.587402343,1.0,scaling(surf,feat[(int)103620.0],i)));
	s=s+0.3597653144*(evaluate2(-109129.742187500,-1.0,scaling(surf,feat[(int)57575.0],i)));
	s=s+0.3628742629*(evaluate2(25391.6894531250,-1.0,scaling(surf,feat[(int)19741.0],i)));	
	s=s+0.355205019*(evaluate2(240154.679687500,1.0,scaling(surf,feat[(int)133083.0],i)));
	s=s+0.3685997732*(evaluate2(-70.758789062,-1.0,scaling(surf,feat[(int)156492.0],i)));
	s=s+0.3673430331*(evaluate2(-69.484375000,-1.0,scaling(surf,feat[(int)153030.0],i)));
	s=s+0.3640224773*(evaluate2(57.2971191406,1.0,scaling(surf,feat[(int)159096.0],i)));
	s=s+0.3699412625*(evaluate2(-57.4375000000,-1.0,scaling(surf,feat[(int)155238.0],i)));
	s=s+0.3734535817*(evaluate2(70.9438476562,1.0,scaling(surf,feat[(int)108656.0],i)));	
	s=s+0.3699007883*(evaluate2(2156.5136718750,-1.0,scaling(surf,feat[(int)106228.0],i)));
	s=s+0.3668281381*(evaluate2(62.680664062,1.0,scaling(surf,feat[(int)2976.0],i)));
	s=s+0.3695665421*(evaluate2(-64.6997070312,1.0,scaling(surf,feat[(int)154832.0],i)));
	s=s+0.3720073540*(evaluate2(-274751.32812500,-1.0,scaling(surf,feat[(int)47720.0],i)));
	s=s+0.353154903*(evaluate2(-1501.5483398438,1.0,scaling(surf,feat[(int)104940.0],i)));
	s=s+0.3630895727*(evaluate2(-34315.337890625,-1.0,scaling(surf,feat[(int)140439.0],i)));
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	s=s+0.3272054961*(evaluate2(26044.8359375000,-1.0,scaling(surf,feat[(int)88687.0],i)));	
	s=s+0.3398084334*(evaluate2(-23199.8974609375,1.0,scaling(surf,feat[(int)80017.0],i)));
	s=s+0.3349128769*(evaluate2(235309.5312500000,1.0,scaling(surf,feat[(int)29951.0],i)));
	s=s+0.3390814145*(evaluate2(-18700.4667968750,-1.0,scaling(surf,feat[(int)5170.0],i)));
	s=s+0.3501482858*(evaluate2(-166542.7656250000,-1.0,scaling(surf,feat[(int)123574.0],i)));
	s=s+0.3588661783*(evaluate2(71.4057617188,1.0,scaling(surf,feat[(int)150231.0],i)));
	s=s+0.3579456556*(evaluate2(-62.5541992188,-1.0,scaling(surf,feat[(int)4698.0],i)));
	s=s+0.3595550561*(evaluate2(-1977.2353515625,1.0,scaling(surf,feat[(int)111303.0],i)));
	s=s+0.3348459774*(evaluate2(-47642.3164062500,-1.0,scaling(surf,feat[(int)158774.0],i)));
	s=s+0.3588882768*(evaluate2(-1656.3579101562,1.0,scaling(surf,feat[(int)97152.0],i)));
	s=s+0.3508609110*(evaluate2(-277444.0156250000,-1.0,scaling(surf,feat[(int)50737.0],i)));
	s=s+0.3341957167*(evaluate2(40720.4843750000,-1.0,scaling(surf,feat[(int)83705.0],i)));
	s=s+0.3464962411*(evaluate2(242.9921875000,1.0,scaling(surf,feat[(int)161848.0],i)));
	s=s+0.3513489445*(evaluate2(-858.0461425781,-1.0,scaling(surf,feat[(int)151239.0],i)));
	s=s+0.3594442848*(evaluate2(-39882.2167968750,-1.0,scaling(surf,feat[(int)160159.0],i)));
	s=s+0.3399895850*(evaluate2(-48040.0058593750,1.0,scaling(surf,feat[(int)158152.0],i)));
	s=s+0.3455316920*(evaluate2(97444.1132812500,1.0,scaling(surf,feat[(int)79385.0],i)));
	s=s+0.3505891181*(evaluate2(189576.2343750000,-1.0,scaling(surf,feat[(int)114119.0],i)));
	s=s+0.2745000000*(evaluate2(420635.2500000000,1.0,scaling(surf,feat[(int)121589.0],i)));
	s=s+0.2879353351*(evaluate2(-75.9858398438,-1.0,scaling(surf,feat[(int)110989.0],i)));
	s=s+0.3155607371*(evaluate2(-29706.9599609375,-1.0,scaling(surf,feat[(int)88174.0],i)));
	s=s+0.3051877784*(evaluate2(196285.6875000000,1.0,scaling(surf,feat[(int)3209.0],i)));
	s=s+0.3239764411*(evaluate2(32171.8203125000,1.0,scaling(surf,feat[(int)144706.0],i)));
	s=s+0.3308744088*(evaluate2(-1566.7180175781,1.0,scaling(surf,feat[(int)103752.0],i)));
	s=s+0.3053239231*(evaluate2(73879.6445312500,1.0,scaling(surf,feat[(int)161363.0],i)));
	s=s+0.3332482440*(evaluate2(58.2495117188,1.0,scaling(surf,feat[(int)106360.0],i)));
	s=s+0.3526397980*(evaluate2(27925.7929687500,1.0,scaling(surf,feat[(int)17792.0],i)));
	s=s+0.3421776278*(evaluate2(-21338.0507812500,-1.0,scaling(surf,feat[(int)53523.0],i)));
	s=s+0.3322747845*(evaluate2(-221605.7656250000,-1.0,scaling(surf,feat[(int)52512.0],i)));
	s=s+0.3254612318*(evaluate2(-2427.0075683594,1.0,scaling(surf,feat[(int)39168.0],i)));
	s=s+0.3521342404*(evaluate2(112721.0156250000,1.0,scaling(surf,feat[(int)44683.0],i)));
	s=s+0.3366655879*(evaluate2(-1511.2357177734,1.0,scaling(surf,feat[(int)103110.0],i)));
	s=s+0.3600959800*(evaluate2(-110715.3984375000,-1.0,scaling(surf,feat[(int)158584.0],i)));
	s=s+0.3496096411*(evaluate2(1978.1313476562,-1.0,scaling(surf,feat[(int)113999.0],i)));
	s=s+0.3550043468*(evaluate2(147461.2265625000,1.0,scaling(surf,feat[(int)32042.0],i)));
	s=s+0.3570875680*(evaluate2(1620.9526367188,-1.0,scaling(surf,feat[(int)72960.0],i)));
	s=s+0.3649019158*(evaluate2(-70.7579956055,-1.0,scaling(surf,feat[(int)158611.0],i)));
	s=s+0.3674185168*(evaluate2(-96131.5859375000,-1.0,scaling(surf,feat[(int)161068.0],i)));
	s=s+0.3470207014*(evaluate2(-1510.7165527344,1.0,scaling(surf,feat[(int)77689.0],i)));
	s=s+0.3646336596*(evaluate2(69.2275390625,1.0,scaling(surf,feat[(int)21916.0],i)));
	s=s+0.3638766617*(evaluate2(543.9663085938,1.0,scaling(surf,feat[(int)100339.0],i)));
	s=s+0.3366109366*(evaluate2(-183314.5312500000,-1.0,scaling(surf,feat[(int)32312.0],i)));
	s=s+0.3508536433*(evaluate2(177716.8437500000,-1.0,scaling(surf,feat[(int)148131.0],i)));
	s=s+0.3555402037*(evaluate2(68.5185546875,1.0,scaling(surf,feat[(int)151527.0],i)));
	s=s+0.3610591969*(evaluate2(-62.5561523438,-1.0,scaling(surf,feat[(int)148566.0],i)));
	s=s+0.3643341217*(evaluate2(202642.7421875000,1.0,scaling(surf,feat[(int)142877.0],i)));
	s=s+0.3474895121*(evaluate2(-1729.0874023438,1.0,scaling(surf,feat[(int)99231.0],i)));
	s=s+0.3632767373*(evaluate2(-67.7563476562,-1.0,scaling(surf,feat[(int)144868.0],i)));
	s=s+0.3595432231*(evaluate2(-66.62451171882,-1.0,scaling(surf,feat[(int)155217.0],i)));
	s=s+0.3625399296*(evaluate2(204554.3984375000,1.0,scaling(surf,feat[(int)42132.0],i)));
	s=s+0.3293533312*(evaluate2(-188613.3828125000,1.0,scaling(surf,feat[(int)148454.0],i)));
	s=s+0.3585537566*(evaluate2(-18815.2812500000,-1.0,scaling(surf,feat[(int)15042.0],i)));
	s=s+0.3512636034*(evaluate2(1804.4433593750,-1.0,scaling(surf,feat[(int)73464.0],i)));
	s=s+0.3558099214*(evaluate2(68687.4453125000,1.0,scaling(surf,feat[(int)161324.0],i)));
	s=s+0.3581418468*(evaluate2(65276.2851562500,-1.0,scaling(surf,feat[(int)20690.0],i)));
	s=s+0.3642338154*(evaluate2(55543.8496093750,1.0,scaling(surf,feat[(int)43169.0],i)));
	s=s+0.3369013389*(evaluate2(94404.3906250000,-1.0,scaling(surf,feat[(int)85156.0],i)));
	s=s+0.3485248116*(evaluate2(-179906.7890625000,-1.0,scaling(surf,feat[(int)59108.0],i)));
	s=s+0.3502657693*(evaluate2(-1685.5614013672,1.0,scaling(surf,feat[(int)105550.0],i)));
	s=s+0.3476726823*(evaluate2(-115061.1250000000,-1.0,scaling(surf,feat[(int)313.0],i)));
	s=s+0.3460622355*(evaluate2(-3621.4604492188,1.0,scaling(surf,feat[(int)74665.0],i)));
	s=s+0.3570876092*(evaluate2(-221611.679687500,-1.0,scaling(surf,feat[(int)153296.0],i)));
	s=s+0.3522976378*(evaluate2(-11850.4082031250,1.0,scaling(surf,feat[(int)159882.0],i)));
	s=s+0.3587484915*(evaluate2(-11293.7734375000,-1.0,scaling(surf,feat[(int)162198.0],i)));	
	s=s+0.3619413621*(evaluate2(-0.0024414062,-1.0,scaling(surf,feat[(int)154937.0],i)));
	s=s+0.3623473718*(evaluate2(0.0017089844,1.0,scaling(surf,feat[(int)162236.0],i)));	
	s=s+0.3715587115*(evaluate2(-4084.8347167969,1.0,scaling(surf,feat[(int)97161.0],i)));
	s=s+0.3639901738*(evaluate2(-9840.085937500,-1.0,scaling(surf,feat[(int)144534.0],i)));	
	s=s+0.3611290848*(evaluate2(1719.5277099609,-1.0,scaling(surf,feat[(int)112197.0],i)));	
	s=s+0.3562031057*(evaluate2(58.2509765625,1.0,scaling(surf,feat[(int)155896.0],i)));
	s=s+0.3611201575*(evaluate2(730.046875000,-1.0,scaling(surf,feat[(int)38010.0],i)));	
	s=s+0.3675034026*(evaluate2(62749.7734375000,1.0,scaling(surf,feat[(int)50735.0],i)));
	s=s+0.3505956031*(evaluate2(-1514.5759277344,1.0,scaling(surf,feat[(int)83990.0],i)));
	s=s+0.3586792068*(evaluate2(-6482.2768554688,-1.0,scaling(surf,feat[(int)137643.0],i)));
	s=s+0.3454440077*(evaluate2(16106.556640625,-1.0,scaling(surf,feat[(int)114033.0],i)));
	s=s+0.2715000000*(evaluate2(142097.953125000,1.0,scaling(surf,feat[(int)5957.0],i)));
	s=s+0.3211744661*(evaluate2(-72745.222656250,-1.0,scaling(surf,feat[(int)92033.0],i)));	
	s=s+0.3367125021*(evaluate2(1621.2572631836,-1.0,scaling(surf,feat[(int)75819.0],i)));
	s=s+0.322410726*(evaluate2(433693.203125000,1.0,scaling(surf,feat[(int)121582.0],i)));
	s=s+0.3310741504*(evaluate2(16371.4794921875,-1.0,scaling(surf,feat[(int)108666.0],i)));
	s=s+0.3474687262*(evaluate2(10422.589843750,1.0,scaling(surf,feat[(int)112677.0],i)));
	s=s+0.3446514519*(evaluate2(-182463.8515625000,-1.0,scaling(surf,feat[(int)155355.0],i)));
	s=s+0.3380385451*(evaluate2(1950.3776855469,-1.0,scaling(surf,feat[(int)77700.0],i)));	
	s=s+0.3641823034*(evaluate2(132924.31250000,1.0,scaling(surf,feat[(int)72424.0],i)));
	s=s+0.3598318504*(evaluate2(3974.2299804688,-1.0,scaling(surf,feat[(int)90330.0],i)));
	s=s+0.3238117088*(evaluate2(363517.04687500,1.0,scaling(surf,feat[(int)27883.0],i)));
	s=s+0.3575199445*(evaluate2(-2022.587402343,1.0,scaling(surf,feat[(int)103620.0],i)));
	s=s+0.3597653144*(evaluate2(-109129.742187500,-1.0,scaling(surf,feat[(int)57575.0],i)));
	s=s+0.3628742629*(evaluate2(25391.6894531250,-1.0,scaling(surf,feat[(int)19741.0],i)));	
	s=s+0.355205019*(evaluate2(240154.679687500,1.0,scaling(surf,feat[(int)133083.0],i)));
	s=s+0.3685997732*(evaluate2(-70.758789062,-1.0,scaling(surf,feat[(int)156492.0],i)));
	s=s+0.3673430331*(evaluate2(-69.484375000,-1.0,scaling(surf,feat[(int)153030.0],i)));
	s=s+0.3640224773*(evaluate2(57.2971191406,1.0,scaling(surf,feat[(int)159096.0],i)));
	s=s+0.3699412625*(evaluate2(-57.4375000000,-1.0,scaling(surf,feat[(int)155238.0],i)));
	s=s+0.3734535817*(evaluate2(70.9438476562,1.0,scaling(surf,feat[(int)108656.0],i)));	
	s=s+0.3699007883*(evaluate2(2156.5136718750,-1.0,scaling(surf,feat[(int)106228.0],i)));
	s=s+0.3668281381*(evaluate2(62.680664062,1.0,scaling(surf,feat[(int)2976.0],i)));
	s=s+0.3695665421*(evaluate2(-64.6997070312,1.0,scaling(surf,feat[(int)154832.0],i)));
	s=s+0.3720073540*(evaluate2(-274751.32812500,-1.0,scaling(surf,feat[(int)47720.0],i)));
	s=s+0.353154903*(evaluate2(-1501.5483398438,1.0,scaling(surf,feat[(int)104940.0],i)));
	s=s+0.3630895727*(evaluate2(-34315.337890625,-1.0,scaling(surf,feat[(int)140439.0],i)));
	if(s<0)
	{
		return -1;
	}
	s = 0;
	s = s+0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,feat[(int)121589.0],i)));
	s = s+0.1706144657*(evaluate2(-9311.8671875000,-1.000000,scaling(surf,feat[(int)90873.0],i)));
	s = s+0.2320851203*(evaluate2(50935.9335937500,1.000000,scaling(surf,feat[(int)148988.0],i)));
	s = s+0.2402345193*(evaluate2(-171806.4062500000,-1.000000,scaling(surf,feat[(int)124635.0],i)));
	s = s+0.2573262077*(evaluate2(-223414.2265625000,1.000000,scaling(surf,feat[(int)83007.0],i)));
	s = s+0.2470397812*(evaluate2(125043.9375000000,1.000000,scaling(surf,feat[(int)9781.0],i)));
	s = s+0.2830593091*(evaluate2(-2979.5800781250,-1.000000,scaling(surf,feat[(int)87795.0],i)));
	s = s+0.2488317873*(evaluate2(-13465.3632812500,-1.000000,scaling(surf,feat[(int)20328.0],i)));
	s = s+0.2914266584*(evaluate2(23895.0273437500,1.000000,scaling(surf,feat[(int)161974.0],i)));
	s = s+0.3203899683*(evaluate2(57346.7871093750,1.000000,scaling(surf,feat[(int)144539.0],i)));
	s = s+0.3310000084*(evaluate2(143205.3984375000,-1.000000,scaling(surf,feat[(int)140235.0],i)));
	s = s+0.2930824553*(evaluate2(24379.5390625000,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3198077894*(evaluate2(-642.8740234375,-1.000000,scaling(surf,feat[(int)92151.0],i)));
	s = s+0.1715164319*(evaluate2(288491.4843750000,1.000000,scaling(surf,feat[(int)121582.0],i)));
	s = s+0.2306325082*(evaluate2(-65480.3085937500,-1.000000,scaling(surf,feat[(int)90089.0],i)));
	s = s+0.2478790999*(evaluate2(-47963.5527343750,-1.000000,scaling(surf,feat[(int)14434.0],i)));
	s = s+0.2588687601*(evaluate2(-17401.6796875000,-1.000000,scaling(surf,feat[(int)160515.0],i)));
	s = s+0.2589874892*(evaluate2(-189683.3437500000,1.000000,scaling(surf,feat[(int)82527.0],i)));
	s = s+0.2842598146*(evaluate2(-42751.1445312500,-1.000000,scaling(surf,feat[(int)161800.0],i)));
	s = s+0.2812122660*(evaluate2(-57602.6406250000,-1.000000,scaling(surf,feat[(int)95793.0],i)));
	s = s+0.3066515741*(evaluate2(-17143.0234375000,-1.000000,scaling(surf,feat[(int)142169.0],i)));
	s = s+0.3149770216*(evaluate2(15004.6074218750,1.000000,scaling(surf,feat[(int)29972.0],i)));
	s = s+0.3201983094*(evaluate2(60.6528320312,1.000000,scaling(surf,feat[(int)105645.0],i)));
	s = s+0.3308580989*(evaluate2(-201619.4843750000,1.000000,scaling(surf,feat[(int)139719.0],i)));
	s = s+0.2971280623*(evaluate2(-1729.4726562500,1.000000,scaling(surf,feat[(int)102956.0],i)));
	s = s+0.3283367275*(evaluate2(10786.6362304688,1.000000,scaling(surf,feat[(int)160259.0],i)));
	s = s+0.3398630213*(evaluate2(-7466.4345703125,-1.000000,scaling(surf,feat[(int)20307.0],i)));
	s = s+0.3402661294*(evaluate2(66.6142578125,-1.000000,scaling(surf,feat[(int)56601.0],i)));
	s = s+0.3212567263*(evaluate2(-648397.4375000000,-1.000000,scaling(surf,feat[(int)43390.0],i)));
	s = s+0.3378948466*(evaluate2(-242616.3984375000,-1.000000,scaling(surf,feat[(int)123334.0],i)));
	s = s+0.3069062830*(evaluate2(-244983.9218750000,1.000000,scaling(surf,feat[(int)79908.0],i)));
	s = s+0.3177856960*(evaluate2(260819.2812500000,1.000000,scaling(surf,feat[(int)61598.0],i)));
	s = s+0.3310358465*(evaluate2(-22741.6318359375,-1.000000,scaling(surf,feat[(int)126968.0],i)));
	s = s+0.1928232848*(evaluate2(344347.7500000000,1.000000,scaling(surf,feat[(int)121463.0],i)));
	s = s+0.2454076890*(evaluate2(-12376.1406250000,-1.000000,scaling(surf,feat[(int)90198.0],i)));
	s = s+0.2807313770*(evaluate2(137226.7500000000,1.000000,scaling(surf,feat[(int)6616.0],i)));
	s = s+0.2937919202*(evaluate2(-55570.6035156250,1.000000,scaling(surf,feat[(int)85837.0],i)));
	s = s+0.2766382749*(evaluate2(-163109.9140625000,-1.000000,scaling(surf,feat[(int)90854.0],i)));
	s = s+0.2848532721*(evaluate2(-16371.7431640625,-1.000000,scaling(surf,feat[(int)22818.0],i)));
	s = s+0.3103580271*(evaluate2(34924.1855468750,1.000000,scaling(surf,feat[(int)147608.0],i)));
	s = s+0.3385338999*(evaluate2(-48551.2539062500,-1.000000,scaling(surf,feat[(int)146642.0],i)));
	s = s+0.3278017337*(evaluate2(20584.7587890625,1.000000,scaling(surf,feat[(int)12115.0],i)));
	s = s+0.3334402571*(evaluate2(27943.2880859375,-1.000000,scaling(surf,feat[(int)128250.0],i)));
	s = s+0.3095847971*(evaluate2(52218.5156250000,1.000000,scaling(surf,feat[(int)161935.0],i)));
	s = s+0.3348288761*(evaluate2(29723.1835937500,1.000000,scaling(surf,feat[(int)99609.0],i)));
	s = s+0.3270171121*(evaluate2(108038.3828125000,-1.000000,scaling(surf,feat[(int)86507.0],i)));
	s = s+0.3209538599*(evaluate2(248629.9375000000,1.000000,scaling(surf,feat[(int)23774.0],i)));
	s = s+0.3163757355*(evaluate2(-959.8259277344,1.000000,scaling(surf,feat[(int)105455.0],i)));
	s = s+0.3211187072*(evaluate2(-165529.4296875000,-1.000000,scaling(surf,feat[(int)21506.0],i)));
	s = s+0.2971280623*(evaluate2(174910.8437500000,1.000000,scaling(surf,feat[(int)30194.0],i)));
	s = s+0.3151830660*(evaluate2(-156101.234375000,-1.000000,scaling(surf,feat[(int)125350.000000],i)));
	s = s+0.3384683476*(evaluate2(-934752.0312500000,-1.000000,scaling(surf,feat[(int)43391.000000],i)));
	s = s+0.3412882462*(evaluate2(156361.828125000,-1.000000,scaling(surf,feat[(int)140357.000000],i)));
	s = s+0.3224412466*(evaluate2(-191149.101562500,-1.000000,scaling(surf,feat[(int)54390.000000],i)));
	s = s+0.3228423696*(evaluate2(-123.5742187500,-1.000000,scaling(surf,feat[(int)87201.000000],i)));
	s = s+0.3259576821*(evaluate2(-35857.9257812500,-1.000000,scaling(surf,feat[(int)160239.000000],i)));
	s = s+0.3436134819*(evaluate2(-95632.5898437500,1.000000,scaling(surf,feat[(int)121622.000000],i)));
	s = s+0.3278205237*(evaluate2(-4144.4094238281,-1.000000,scaling(surf,feat[(int)93576.000000],i)));
	s = s+0.3509143200*(evaluate2(157292.0156250000,1.000000,scaling(surf,feat[(int)12809.000000],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3432705068*(evaluate2(-21815.4921875000,-1.000000,scaling(surf,feat[(int)95473.000000],i)));
	s = s+0.3493193744*(evaluate2(40263.1113281250,1.000000,scaling(surf,feat[(int)159614.000000],i)));
	s = s+0.3295947999*(evaluate2(1376.9604492188,-1.000000,scaling(surf,feat[(int)43199.000000],i)));
	s = s+0.3430840530*(evaluate2(72596.7109375000,1.000000,scaling(surf,feat[(int)147319.000000],i)));
	s = s+0.3509979389*(evaluate2(-66.1621093750,-1.000000,scaling(surf,feat[(int)161710.0],i)));
	s = s+0.3509350683*(evaluate2(63.6138305664,1.000000,scaling(surf,feat[(int)156113.0],i)));
	s = s+0.3446087759*(evaluate2(80.9765625000,1.000000,scaling(surf,feat[(int)103080.000000],i)));
	s = s+0.3596015664*(evaluate2(8003.1298828125,1.000000,scaling(surf,feat[(int)88944.0],i)));
	s = s+0.3528729277*(evaluate2(1768.4831542969,-1.000000,scaling(surf,feat[(int)75621.000000],i)));
	s = s+0.3459865467*(evaluate2(82784.4843750000,1.000000,scaling(surf,feat[(int)160241.0],i)));
	s = s+0.3303353043*(evaluate2(20339.1796875000,-1.000000,scaling(surf,feat[(int)151190.0],i)));
	s = s+0.3561070248*(evaluate2(-3641.2100830078,1.000000,scaling(surf,feat[(int)103146.000000],i)));
	s = s+0.2260000000*(evaluate2(326748.703125000,1.000000,scaling(surf,feat[(int)121449.000000],i)));
	s = s+0.2732072214*(evaluate2(-149137.1484375000,-1.000000,scaling(surf,feat[(int)47547.000000],i)));
	s = s+0.2898135291*(evaluate2(-35913.8320312500,-1.000000,scaling(surf,feat[(int)91943.000000],i)));
	s = s+0.2960439102*(evaluate2(-242334.5937500000,1.000000,scaling(surf,feat[(int)79227.000000],i)));
	s = s+0.3187789869*(evaluate2(-134162.0546875000,-1.000000,scaling(surf,feat[(int)155432.000000],i)));
	s = s+0.3201766622*(evaluate2(-2618.4570312500,-1.000000,scaling(surf,feat[(int)142284.000000],i)));
	s = s+0.3379131695*(evaluate2(-20448.4082031250,-1.000000,scaling(surf,feat[(int)14593.000000],i)));
	s = s+0.3400319652*(evaluate2(-87320.6679687500,-1.000000,scaling(surf,feat[(int)40274.000000],i)));
	s = s+0.3165849378*(evaluate2(-15220.2636718750,-1.000000,scaling(surf,feat[(int)86425.000000],i)));
	s = s+0.3252613995*(evaluate2(-106980.4531250000,-1.000000,scaling(surf,feat[(int)54494.000000],i)));
	s = s+0.3092849187*(evaluate2(-263610.3281250000,1.000000,scaling(surf,feat[(int)91643.000000],i)));
	s = s+0.3172423263*(evaluate2(175985.5000000000,-1.000000,scaling(surf,feat[(int)25799.000000],i)));
	s = s+0.3090247427*(evaluate2(12123.2353515625,-1.000000,scaling(surf,feat[(int)110284.000000],i)));
	s = s+0.3254540184*(evaluate2(-93302.234375000,-1.000000,scaling(surf,feat[(int)159799.000000],i)));
	s = s+0.3347800436*(evaluate2(-0.0029296875,-1.000000,scaling(surf,feat[(int)95528.000000],i)));
	s = s+0.3393974157*(evaluate2(132797.867187500,1.000000,scaling(surf,feat[(int)6913.000000],i)));
	s = s+0.3224700949*(evaluate2(-2520.4072265625,1.000000,scaling(surf,feat[(int)106430.000000],i)));
	s = s+0.3396570479*(evaluate2(63.6142578125,1.000000,scaling(surf,feat[(int)161632.000000],i)));
	s = s+0.3364152361*(evaluate2(-152088.742187500,-1.000000,scaling(surf,feat[(int)127142.000000],i)));
	s = s+0.3318304060*(evaluate2(7269.3359375000,-1.000000,scaling(surf,feat[(int)71820.000000],i)));
	s = s+0.3323748654*(evaluate2(-126224.1171875000,-1.000000,scaling(surf,feat[(int)465.000000],i)));
	s = s+0.3344496067*(evaluate2(-1692.089843750,1.000000,scaling(surf,feat[(int)39252.000000],i)));
	s = s+0.3481869905*(evaluate2(43323.1953125000,1.000000,scaling(surf,feat[(int)161996.000000],i)));
	s = s+0.3296427806*(evaluate2(-2056.1044921875,1.000000,scaling(surf,feat[(int)110475.000000],i)));
	s = s+0.3555937196*(evaluate2(64875.9804687500,1.000000,scaling(surf,feat[(int)85001.000000],i)));
	s=s+0.3502189631*(evaluate2(1649.7509765625,-1.0,scaling(surf,feat[(int)86970.0],i)));
	s=s+0.3375397358*(evaluate2(158553.1171875000,1.0,scaling(surf,feat[(int)62982.0],i)));
	s=s+0.3289556990*(evaluate2(1540.3522949219,-1.0,scaling(surf,feat[(int)111300.0],i)));
	s=s+0.3550621114*(evaluate2(-77667.1093750000,-1.0,scaling(surf,feat[(int)42590.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3266422573*(evaluate2(1210.3228759766,-1.0,scaling(surf,feat[(int)98754.0],i)));
	s=s+0.3500241501*(evaluate2(-411991.0625000000,-1.0,scaling(surf,feat[(int)47698.0],i)));
	s=s+0.3370979052*(evaluate2(-12858.0649414062,1.0,scaling(surf,feat[(int)99966.0],i)));
	s=s+0.3367453767*(evaluate2(205665.1015625000,1.0,scaling(surf,feat[(int)38182.0],i)));
	
	if(s<0)
	{
		return -1;
	}

	return 1;
}
void copy()
{
	FILE* fsrc;
	FILE* fdest;
	char buffer[512];
	int nblus;
	if((fsrc = fopen("strongClassifieur.txt", "rb")) == NULL)
	{
		printf("error\n");
	}	
	if((fdest = fopen("Cascade.txt", "a")) == NULL)
	{
		fclose(fsrc);
	}
	while((nblus = fread(buffer, 1, 512, fsrc)) != 0)
	{
		fwrite(buffer, 1, nblus, fdest);	
	}
	fprintf(fdest, "\n");
	fclose(fdest);
	fclose(fsrc);
}

void cascade(example* arr,float fpr,int l,float gl,float bl)
{
	float nfpr = 1;
	float	  ngl =0;
	int t=797;
	int neg=498;
	example* arr2;
	image *tab = malloc(797*sizeof(image));
	arr2=weightImage(tab, 797, 797);
	int vect[797]={0};
	while(nfpr > fpr)
	{
		float u = 0.01;   
    	ngl++;
    	float snl = 0;
    	int tl = 1;
		float ge = 0;
		//int gg = 0;
		float be = 0;
		//int bg = 0;
		float nbl = 0;
		eight : adaboost(arr, tl,t-1);
		//ecrire dans cascade.txt, le contenu de strongclassifieur.txtfait
		copy();
		//(fait)ecrire la fonction qui evalue un classifieur fort
		//et faire l'evaluation pour les 3 tableux
		//faire une boucle jusqua 298 qui compte le nombre d'image ou ya une erreur 		(gamma e)
		
        
		nine :for(int i=0;i<t;i++)
			{
			    if(eval(i,arr2,snl)!=arr[i].label)
				{
					if(arr2[i].label==1)
					{
						ge++;
					}
					else
					{
						be++;
					}
				}
				else
				{
					if(arr2[i].label==-1)
					{
						vect[i]+=1;
					}
				}
			}
		ge=ge/299;
		be=be/neg;
		// idem pour les autres
		//ngl = max(ge,gg);
		//nbl = max(be,bg);
		ngl=ge;
		nbl=be;
		printf("%f\n",ge);
		printf("%f\n",be);
	
		if((ngl <= gl) && (1-nbl >= 1-bl))
		{
			printf("ok");
			nfpr = nfpr * ngl;
			
		}
		else if(((ngl <= gl) && (1-nbl < 1-bl)) && (u > 0.00001 ))
		{
				snl += u;
				if((snl<-1) || (snl>1))
				{
					u = u/2;
					snl -= u;
				}	
				printf("ok1");
				goto nine;
		}
		else if(((ngl > gl) && (1-nbl >= 1-bl)) && (u > 0.00001 ))
		{
				snl -= u;
				if((snl<-1) || (snl>1))
				{
					u = u/2;
					snl += u;
				}
				printf("ok2");	
				goto nine;
		}
		else
		{
			int nl=(10*l+10)<200?(10*l+10):200;
			if(tl > nl)
					{
						snl = -1;
						while(1-nbl < 0.99)
						{
	                                                for(int i=0;i<t;i++)
							{
							    if(eval(i,arr2,snl)!=arr[i].label)
								{
									if(arr2[i].label==1)
									{
										ge++;
									}
									else
									{
										be++;
									}
								}
							}
							ngl = ge;
							nbl = be;
						}	
						nfpr *= ngl;
					}
					else
					{
						printf("ok");
						tl++;
						goto eight;
					}
		}
		
		for(int i=0;i<797;i++)
		{
			if(vect[i]==1)
			{
			
			
			 	
			  for(int j=i; j<t; j++)
			  {
				arr[j] = arr[j+1];
			  }
			  
			  
			
					vect[i]+=1;
					t--;
					neg--;
			}
		}
	}
}
void drawEmptyRect(SDL_Surface * surf,int posX, int posY, int width, int length, int R, int G, int B)
{
	SDL_Rect ligneHaut;
	ligneHaut.x = posX-2;
	ligneHaut.y = posY-2;
	ligneHaut.w = length;
	ligneHaut.h = 2;
 
	SDL_FillRect(surf, &ligneHaut, SDL_MapRGB(surf->format, R, G, B));
 
	SDL_Rect ligneDroite;
	ligneDroite.x = posX+length-2;
	ligneDroite.y = posY-2;
	ligneDroite.w = 2;
	ligneDroite.h = width;
 
	SDL_FillRect(surf, &ligneDroite, SDL_MapRGB(surf->format, R, G, B));
 
	SDL_Rect ligneGauche;
	ligneGauche.x = posX-2;
	ligneGauche.y = posY-2;
	ligneGauche.w = 2;
	ligneGauche.h = width;
 
	SDL_FillRect(surf, &ligneGauche, SDL_MapRGB(surf->format, R, G, B));
 
	SDL_Rect ligneBas;
	ligneBas.x = posX-2;
	ligneBas.y = posY+width-2;
	ligneBas.w = length;
	ligneBas.h = 2;
 
	SDL_FillRect(surf, &ligneBas, SDL_MapRGB(surf->format, R, G, B));
	SDL_SaveBMP (surf,"tata.bmp");
	
}
void detect(SDL_Surface *surf)
{
	//int nb=0;
	SDL_Rect R,p,R2;
	p.x=0;
	p.y=0;
	//int **arr=Integral(surf);
	
	SDL_Surface *fenetre=NULL;
	SDL_Surface *fenetre2=NULL;
	feature *tab = malloc(sizeof(feature)*162336);

	int k2 = 0;
	ex *tab2 = malloc(sizeof(ex)*100);
	for(int i =0; i<100; i++)
	{
		tab2[k2].free = 0;
		tab2[k2].i = 0;
		tab2[k2].j = 0;	
	}
	int k=24;

	while(k<surf->w && k<surf->h)
	{
	for(int i=0; i<surf->w-k; i++)
	{
		for(int j=0; j<surf->h-k; j++)
		{	
			
			fenetre=SDL_CreateRGBSurface(SDL_HWSURFACE,k,k,32,0,0,0,0);
			R.x=i;
			R.y=j;
			R.w=k;
			R.h=k;
			SDL_BlitSurface(surf,&R,fenetre,&p);
			haarr2(fenetre,tab);
			//ajouter boucle
					//printf("%d",tab[1].res);

					if(attentionalCascade(tab,fenetre,k)==1)
					{
						for(int l= i; l<i+24; l++)
						{
							for(int r= j; r<j+24; r++)
							{
								for(int o = 0; o<100; o++)
								{
									if(tab2[o].j == r || tab2[o].i == l)
									tab2[k2].free = 1;
								}
						
							}
						}
				
						if(tab2[k2].free == 0)
						{
							drawEmptyRect(surf,i,j,24,24,255,255,0);
							tab2[k2].i = i;
							tab2[k2].j = j;	
							k2++;
						}
					}
				
			
			//printf("%d\n",k);
			//printf("%f",0.1545*(evaluate2(262521.703125,1.000000,scaling(surf,tab[(int)121589.0],24,arr))));
			
			
			//free(arr2)[0]);
	
	/*for(int i=0; i<surf->w-50; i++)
	{
		for(int j=0; j<surf->h-50; j++)
		{
			fenetre=SDL_CreateRGBSurface(SDL_HWSURFACE,50,50,32,0,0,0,0);
			R.x=i;
			R.y=j;
			R.w=50;
			R.h=50;
			SDL_BlitSurface(surf,&R,fenetre,&p);	
			feature* f=haarr2(fenetre);
			//if(eval2(f,0,fenetre)==1)
			if(attentionalCascade(f,fenetre,50)==1)
			{
				drawEmptyRect(surf,i,j,50,50,255,255,0);
			}
			free(fenetre);
			free(f);
		}
	}*/
	
	}
	}
	k=k*2;
	//printf("%d",nb);
	//free(arr);
	}
	free(tab);
	//printf("%d",k);	
}
