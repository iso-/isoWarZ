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









//list haarFusion(SDL_Surface *i);
//list haarr(SDL_Surface *image);
void haarr2(SDL_Surface *image,queue q);
int max(int a, int b);
int scaling(SDL_Surface *image, feature feat);

typedef struct example example;
struct example
{
    int label;
    //list feat;
    int weight;
};
example* weightImage(size_t nb);

static inline void swap(example* a, example* b);
example* min_pos(example *arr, size_t len,int j);
void sort (example *arr, int j,size_t taille);

int* decision(example* arr, int j, int n);
#endif
