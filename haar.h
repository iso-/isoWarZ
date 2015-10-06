#ifndef haar
#define haar
#include "pretraitement2.h"
#include <stdlib.h>
#include <stdio.h>
#define ERREUR -1

typedef struct feature feature;
struct feature 
{
    int t;
    int i;
    int j;
    int h;
    int w;
    int res;
};

typedef struct element element;
struct element
{
    feature f;
    struct element *nxt;
    //struct element *previous;
};
typedef element* list;

list add_list(list l, feature f)
{
    element* newElement = malloc(sizeof(element));
    newElement->f = f;
    newElement->nxt = NULL;
    if(l == NULL)
    {
	return newElement;
    }
    else
    {
	element* temp=l;
	while(temp->nxt != NULL)
	{
		temp = temp->nxt;
	}
	temp->nxt = newElement;
	return l;
    }
}

list element_i(list l, int ind)
{
    for(int i=0; i<ind && l != NULL; i++)
    {
	l = l->nxt;
    }

    if(l == NULL)
    {
	return NULL;
    }
    else
    {
	return l;
    }    
}

feature value(list l)
{
    return(l->f);
}
int nb_elements(list l)
{
    if(l == NULL)
	return 0;
    return nb_elements(l->nxt)+1;
}
#endif
