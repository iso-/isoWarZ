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
typedef struct image image;
struct image
{
  char* name;
};

typedef struct node_t node_t, *node, *queue;
struct node_t { feature f; node prev, next; };
 
#define HEAD(q) q->prev
#define TAIL(q) q->next
queue q_new()
{
    node q = malloc(sizeof(node_t));
    q->next = q->prev = 0;
    return q;
}
 
int empty(queue q)
{
    return !HEAD(q);
}
 
void enqueue(queue q, feature feat)
{
    node nd = malloc(sizeof(node_t));
    nd->f = feat;
    if (!HEAD(q)) HEAD(q) = nd;
    nd->prev = TAIL(q);
    if (nd->prev) nd->prev->next = nd;
    TAIL(q) = nd;
    nd->next = 0;
}
 
int dequeue(queue q, feature *val)
{
    node tmp = HEAD(q);
    if (!tmp) return 0;
    *val = tmp->f;
 
    HEAD(q) = tmp->next;
    if (TAIL(q) == tmp) TAIL(q) = 0;
    free(tmp);
 
    return 1;
}
feature search(queue q,int n)
{
    node tmp = HEAD(q);	
    while(n>0)
	
    {tmp = tmp->next;
	n--;}
    
   
 
    //HEAD(q) = tmp->next;
    
    
 
    return tmp->f;
}


queue haarr2(SDL_Surface *image);
int scaling(SDL_Surface *image, feature feat);

typedef struct example example;
struct example
{
    int label;
    queue feat;
    int weight;
};
static void fill_array(image tab[], int len);
example* weightImage(image tab[], int len, int nb); 
//example* weightImage(size_t nb);

//int decisionStump(
/*typedef struct data data
struct data
{
  int treshold;
  int toggle;
  int error;
  int margin;
  int stump;
  feature feat;
}*/

static inline void swap(example* a, example* b);
example* min_pos(example *arr, size_t len,int j);
void sort (example *arr, int j,size_t taille);
void bubblesort(example *tab, size_t len,int j);
int* decision(example* arr, int j, int n);
#endif
