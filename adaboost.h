#ifndef adaboost
#define adaboost
#include "haar.h"
#include <stdlib.h>
#include <stdio.h>
//#include "haar.h"
#define ERREUR -1

//list haarFusion(SDL_Surface *i);
typedef struct example example;
struct example
{
    int label;
    list feat;
    int weight;
};
example* weightImage(size_t nb);

#endif
