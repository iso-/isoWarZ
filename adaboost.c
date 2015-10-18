# include <stdio.h>
# include <stdlib.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>
# include <math.h>
# include "adaboost.h"
# include <string.h>

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


/*int Decision(list l)
{
    int threshold = (value(element_i(l,0))).res)-1;
    int toggle;
    int error = 2;
    int margin = 0;
}*/
