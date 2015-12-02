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
    return tmp->f;
}

void haarr2(SDL_Surface *image, feature *tab, int **arr);
int scaling(SDL_Surface *image, feature feat,int t, int **arr);

typedef struct example example;
struct example
{
    int label;
    feature* feat;
    float weight;
};
unsigned max(int a, int b)
{
  return (a>b) ? a : b;
}

typedef struct face face;
struct face
{
	int i;
	int j;
	int k;
};

example* weightImage(image tab[], int len, int nb); 

int evaluate(float *tab,feature f);
static inline void swap(example* a, example* b);
example *choose_pivot(example *begin,example *end);
int partitionner(example *tableau, int p, int r,int k);
void quickSort(example *tableau, int p, int r,int k);
example* min_pos(example *arr, size_t len,int j);
void sort (example *arr, int j,size_t taille);
void bubblesort(example *tab, size_t len,int j);
float* decision(example* arr, int j, int n);
static inline int is_sorted(example *begin, example *end,int j);
float *Beststump (example* arr,int d,int n);
void adaboost(example* arr, int T,int n);
example* positive(image tab[], int len, int nb);
example* negative(image tab[], int len, int nb);
void copy(); 
int eval(int n,example* arr,int sl);
void cascade(example* arr, float fpr, int l, float gl,float bl);
void drawEmptyRect(SDL_Surface * surf, SDL_Surface *surf2, int posx, int posy, int width, int length, int r, int g, int b);
void detect(SDL_Surface *surf);
int evaluate(float *tab,feature f);
float evaluate2(float tab0, float tab1,int f);
int eval2(feature *feat, SDL_Surface *surf);
int attentionalcascade(feature *feat, SDL_Surface *surf,int i);
#endif
