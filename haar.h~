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

/*typedef struct element element;
struct element
{
    feature f;
    element *nxt;
};

typedef struct queue queue;
struct queue queue
{
    element *first;
};

void put(queue *q, feature feat)
{
    element *e = malloc(sizeof(*e));
    if(queue == NULL || e == NULL)
    {
	exit(EXIT_FAILURE);
    }
    
    e->f = feat;
    e->nxt = NULL;
    if(queue->first != NULL)
    {
	element *currentPos = queue->first;	
	while(currentPos->nxt != NULL)
	{
	    currentPos = currentPos->nxt;
	}
	currentPos->nxt = e;
    }
    else
    {
	queue->first = e;
    }
}*/

typedef struct type type;
typedef struct type 
{
  feature f;
  struct type *nxt;
}type;

typedef struct queue queue;
typedef struct queue
{
  type *first;
  type *last;
  int length;
}queue;

/*int nb_element(queue *q)
{
  return (q.length);
}*/

void init(queue *q)
{
  q->first = NULL;
  q->last = NULL;
  q->length = 0;
}

queue* push(queue *q, type *e, feature f)
{
  type* newElement = malloc(sizeof(type));
  newElement->f = f;

  if(e == NULL)
  {
    if(q->length == 0)
    {
      q->last = newElement;
      newElement->nxt = q->first;
      q->first = newElement;
    }
    else
    {
      if(e->nxt == NULL)
      {
        q->last = newElement;
        newElement->nxt = e->nxt;
        e->nxt = newElement;
      }
    }
  }
  q->length++;
  return q;
} 

/*queue push(feature f, queue q)
{
  queue newElement = NULL;
  newElement = malloc(QSIZE);
  newElement->f = f;
  if(q)
  {
    newElement->nxt = q->nxt;
    q->nxt = newElement;
  }
  else
  {
    newElement->nxt = newElement;
  }
  return newElement;
}*/

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

type* element_n(queue* q, int ind)
{
  type *e;
  e = q->first;
  for(int i=0; i<ind && e != NULL; i++)
    {
	e = e->nxt;
    }
  if(e == NULL)
    {
	return NULL;
    }
    else
    {
	return e;
    }    
}

list fusion(list l, list l2)
{
  if(l == NULL)
    return l2;
  element* temp =l;
  while(temp->nxt != NULL)
  {
    temp = temp->nxt;
  }  
  temp->nxt = l2;
  return l;
}

feature value(list l)
{
    return(l->f);
}

feature val(type* e)
{
  return(e->f); 
}

int nb_elements(list l)
{
    if(l == NULL)
	return 0;
    return nb_elements(l->nxt)+1;
}

list haarFusion(SDL_Surface *i);
list haarr(SDL_Surface *image);
queue* haarr2(SDL_Surface *image);
int max(int a, int b);
int scaling(SDL_Surface *image, feature feat);

typedef struct example example;
struct example
{
    int label;
    list feat;
    int weight;
};
example* weightImage(size_t nb);

static inline void swap(example* a, example* b);
example* min_pos(example *arr, size_t len,int j);
void sort (example *arr, int j,size_t taille);

int* decision(example* arr, int j, int n);
#endif
