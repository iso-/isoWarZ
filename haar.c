# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
# include "haar.h"
# include <math.h>
# include <dirent.h>
# include <string.h>



/*void str_cat(char *dest, const char *src)
{

    while (*dest!= '\0')
        *dest++ ;
    do
    {
        *dest++ = *src++;
    }
    while (*src != '\0') ;
}*/


int main()
{   
	/*char data[500]="face0164.png";
	 //const char fza[500]=data;
			char file[500]="visage/";
			
			strcat(file,data);
	printf("%s\n",file);*/
	//char* file1 = "visage";
	//char* file2 = "/home/iso/isoWarZ/isoWarZ/nonvisage";
	
<<<<<<< HEAD
	weightImage(tab, 299, 299);
	//printf("%s\n",tab[5].name);
=======
	example* arr;
	image *tab = malloc(797*sizeof(image));
	
	arr=weightImage(tab, 797, 797);
	
	
	
	//bubblesort(arr,797,10);
	

	
	
	adaboost(arr,20,796);
	

	
	//printf("%f",t[2]);
>>>>>>> 7471919720cbfad6a733d912a7e77309f858fc88
	
	//weightImage(tab, 299, 400);
	//arr = weightImage(800);
	//printf("%d\n",(search(arr[71].feat,2)).res);
	//printf("%d\n", 
	/*DIR* rep = NULL;
	rep = opendir("/home/iso/isoWarZ/isoWarZ/visage");
	struct dirent* filel = NULL;
	if(rep == NULL)
	perror("erreur :");
	printf("le dossier a été ouvert correctement\n");*/

	//char old[1000];
	/*const char* old = "face0001.png";
	const char* new = ".png";
	int i =1;*/
	//char buff[35];
	//printf("nom : %s\n", filel->d_name);
		
	/*sprintf(buff,"%d", i);
	strcat(buff, new);
	if(rename(old, new)==-1)
		{
			printf("nom : %s\n", filel->d_name);
			//perror("rename");
		}*/
	//for(int i=1; i<300; i++)
	//{
		//sprintf(buff,"%d", i);
		//strcat(old, (char)i);
		//strcat(old, ".png");
	/*while((filel = readdir(rep)) != NULL)
	{
		char buff[15];
	//printf("nom : %s\n", filel->d_name);
		
		sprintf(buff,"%d", (i+1));
		char* data;
		data = filel->d_name;
		//if(rename(filel->d_name, strcat(buff, new))==-1)
		if(data[0] != '.')
		{
			printf("nom : %s\n", filel->d_name);
			//perror("rename");
			i++;
		}
		
	}
		printf("%d\n", i);*/
		//new = i + ".png";
		
	//}
	//closedir(rep);
	return 0;
	//DIR* dir = NULL;
	//dir = opendir("visage");
	//rename("face0001.png", "1.png");
   // SDL_Surface *surface = NULL;
	//surface = IMG_Load("face0001.png");
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

static void fill_array(image tab[], int len)
{
  DIR* rep = NULL;
  rep = opendir("visage");
  
  struct dirent* filel = NULL;
	int i =0;

    if(rep != NULL)
	{

		while(((filel = readdir(rep)) != NULL)&(i<len))
		{
			char file[20]="visage/";
			char *data = filel->d_name;
			if(data[0] != '.')
			{
				strcat(file,data);
				image picture;
				picture.name = file;
				tab[i]=picture;
				
				
				//printf("%s\n", tab[i].name);
				i++;
			}
		}
	//printf("%s\n", tab[298].name);
	}

  
	closedir(rep);	
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

		while(((filel = readdir(rep)) != NULL)&(i<298))
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
				//printf("%s\n", tab[i].name);
				win = IMG_Load(tab[i].name);
				example e;
				e.feat = haarr2(win);
			   	e.label = 1;
			    	e.weight = 1/596.0;
				array[i] = e;
				SDL_FreeSurface(win);
				printf("%s\n", tab[i].name);
				i++;
			}
		}
	//printf("%s\n", tab[298].name);
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
				//printf("%s\n", tab[i].name);
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
	//printf("%s\n", tab[298].name);
	}
	printf("%d\n",i);
  
	closedir(rep1);	
		
	
		//printf("%s\n", tab[0].name);
		//for(size_t i=0; i<len; i++)
		//{
				//SDL_Surface *win = NULL;
				//printf("%s\n", tab[i].name);
				//win = IMG_Load(*tab[j]);
				//example e;
				//e.feat = haarr2(win);
			   	//e.label = 1;
			    	//e.weight = 1/598;
				//array[i] = e;
				//SDL_FreeSurface(win);
				//printf("%d\n", i);
		//}
		
		//printf("le dossier a été ouvert correctement\n");
		
		/*while((filel = readdir(rep)) != NULL)
		{
			char file[20]="visage/";
			char* data = filel->d_name;
			if(data[0] != '.')
			{	
				SDL_Surface *win = NULL;
				strcat(file,data);
				printf("%s\n", file);
				win = IMG_Load(file);
				example e;
				e.feat = haarr2(win);
			   	e.label = 1;
			    	e.weight = 1/598;
				array[i] = e;
				SDL_FreeSurface(win);
				i++;
				printf("%d\n", i);
			}
		if(i == 100 || i == 180)
			SDL_Delay(1000);
		}
		closedir(rep);
	}*/

	/*DIR* rep2 = NULL;
	rep2 = opendir("azerty");
	if(rep2 != NULL)
	{
	while((filel = readdir(rep2)) != NULL)
	{
		char file[20]="azerty/";
		char* data = filel->d_name;
		if(data[0] != '.')
		{	
			SDL_Surface *win = NULL;
			strcat(file,data);
			printf("%s\n", file);
			win = IMG_Load(file);
			example e;
			e.feat = haarr2(win);
		   	e.label = 1;
		    	e.weight = 1/598;
			
			array[i] = e;
			SDL_FreeSurface(win);
			i++;
			printf("%d\n", i);
		}
	}
	}
	closedir(rep2);*/

	/*rep = NULL;
	rep = opendir("visage3");
	while((filel = readdir(rep)) != NULL)
	{
		char file[20]="visage3/";
		char* data = filel->d_name;
		if(data[0] != '.')
		{	
			SDL_Surface *win = NULL;
			strcat(file,data);
			printf("%s\n", file);
			win = IMG_Load(file);
			example e;
			e.feat = haarr2(win);
		   	e.label = 1;
		    	e.weight = 1/598;
			
			array[i] = e;
			SDL_FreeSurface(win);
			i++;
			printf("%d\n", i);
		}
	}*/

		
	//printf("%d", i);
    /*rep = opendir(filename2);
    if(rep == NULL)
	perror("erreur :");
    filel = NULL;
    while((filel = readdir(rep)) != NULL)
    {	
	example e;
	SDL_Surface *surf = NULL;
	surf = IMG_Load(filel->d_name);
	    e.label = -1;
	    e.weight = 1/(1000);
	e.feat = haarr2(surf);
	arr[i] = e;
	i++;
    } */
   //closedir(rep);
   return array;
}

queue haarr2(SDL_Surface *image)
{ 
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

float* decision(example* arr, int j, int n)
{
    //bubblesort(arr,n,j);
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
   if((f.res>=tab[0])&(tab[1]==1))
	{
		return 1;
	}
   if((f.res<tab[0])&(tab[1]==1))
	{
		return -1;
	}
 if((f.res>=tab[0])&(tab[1]==-1))
	{
		return -1;
	}
   if((f.res<tab[0])&(tab[1]==-1))
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
		bubblesort(arr,797,i);
		float *ar2 = decision(arr,i,n);
		if((ar2[2]<ar[2])|((ar2[3]>ar[3])&(ar2[2]==ar[2])))
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
	   float error=0;
	   float *tab= Beststump(arr,20,n);
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
