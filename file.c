# include <stdio.h>
# include <stdlib.h>

void fill_array(char *name, int *arr, int n);
int main()
{
	 FILE* file = NULL;
  file = fopen("strongClassifieur.txt", "r+");
  int tab[5] = {0,1,2,3,4};
  if(file != NULL)
  {
   for(int i=0; i<5; i++)
   {
    fputc('|',file);
    fprintf(file, "%d", tab[i]);
   }
   fprintf(file, "\n");}
if(file != NULL)
  {
   for(int i=0; i<5; i++)
   {
    fputc('|',file);
    fprintf(file, "%d", tab[i]);
   }
   fprintf(file, "\n");}
if(file != NULL)
  {
   for(int i=0; i<5; i++)
   {
    fputc('|',file);
    fprintf(file, "%d", tab[i]);
   }
   fprintf(file, "\n");}
    fclose(file);
  
 
  return 0; 
}


