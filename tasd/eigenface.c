#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "../pretraitement2.h"

SDL_Surface* Moyenne(SDL_Surface **tab, size_t t);
SDL_Surface* Diff(SDL_Surface* a, SDL_Surface* b);
/*int main()
{
  

  SDL_Surface** tab = malloc(4*sizeof(SDL_Surface));
  goToGrey(tab[0] = IMG_Load("moi2.JPG"));
  goToGrey(tab[1] = IMG_Load("moi1.JPG"));
  goToGrey(tab[2] = IMG_Load("moi3.JPG"));
  goToGrey(tab[3] = IMG_Load("moi4.JPG"));
  SDL_SaveBMP(tab[0], "testbefore.bmp");
  SDL_SaveBMP(Moyenne(tab, 4), "test.bmp");
  
  SDL_SaveBMP(Diff(IMG_Load("lucas1.jpg"), IMG_Load("test.bmp")), "testDiff.bmp");
  return 0;
}
*/

/*************************************************************
 * *******************Moyenne de l'image********************
 * **********************************************************/


SDL_Surface* Moyenne(SDL_Surface **tab, size_t size)
{
  SDL_Surface *tmp = SDL_CreateRGBSurface(SDL_HWSURFACE, (**tab).w, (**tab).h, 32, 0, 0, 0, 0);
  Uint32 res = 0;
  //printf("entree premiere boucle\n");
  for(int j = 0; j < (**tab).w; j++)
  {
    //printf("2eme boucle\n");
    for(int k = 0; k < (**tab).h; k++)
    {
      //printf("troisieme boucle\n");
      for(size_t i = 0; i < size; i++)
      {
        res += getpixel(*(tab+i), j, k);
      }
      defPixel(tmp, j, k, res/size);
      res = 0;
    }
  }
  return tmp;
}


/****************************************************************
 * *****************Difference entree et moyenne******************
 * **************************************************************/

SDL_Surface* Diff(SDL_Surface* entry, SDL_Surface* moy)
{
  for(int i = 0; i < entry->w; i++)
  {
    for(int j = 0; j < entry->h; j ++)
    {
      //rajouter surement boucle for
      defPixel(entry, i, j, getpixel(entry, i, j) - getpixel(moy, i, j));
    }
  }
  return entry;
}
