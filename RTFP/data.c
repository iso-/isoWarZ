#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "data.h"

/*------------------Concatenation-----------------
---------------------Fonctionnelle---------------*/


char* Concat(char *a, char *b)
{
	char *c = malloc(50*sizeof(char));
	for(unsigned int i = 0; i<strlen(a); i++)
	{
		*(c+i) = *(a+i);
	}
	unsigned int j;
	unsigned int lena = strlen(a);
	for(j = 0; j<strlen(b); j++)
	{
		*(c+lena+j)=*(b+j);
	}
	*(c+lena+j) = '\0';
	return c;
}


/*--------Ajout d'un element au chargement---------
-------------------------------------------------*/


CharacterInfo* AddInfoStart(CharacterInfo *c, char *name)
{
	CharacterInfo *new = malloc(sizeof(CharacterInfo)); 
	new->next = c;
	new->name = name;
	new->caracter = Concat(name, "-Caracter"); 	new->image = Concat(name, "-Image");	
	printf("Ajout effectué avec bonté! %s\n", new->image);
	return new;
}


/*----------------Ajout d'un element---------------
-------------------------------------------------*/


CharacterInfo* AddInfo(CharacterInfo *c, char *name)
{

	CharacterInfo *new = malloc(sizeof(CharacterInfo)); 	new->next = c;
	new->name = name; 	new->caracter = Concat(name, "-Caracter");
	new->image = Concat(name, "-Image");
	ConfigFile('+');
	FILE *file = NULL;
	file = fopen("RTFP.data", "r+");
	if(file != NULL)
	{
		fseek(file, 0, SEEK_END);
		fputs(name, file);
		fputc('\n', file);
		fclose(file);
	}	
	printf("Ajout effectué avec bonté! %s\n", new->image);
	return new;
}


/*-----------Ajout de plusieurs elements-----------
-------------------------------------------------*/

CharacterInfo* AddBatch(CharacterInfo *c, char **tab)
{
	int i = 0;
	while(*(tab+i) != NULL)
	{
		c = AddInfo(c, *(tab+i));
		i++;
	}
	return c;
}


/*----------Modification d'un element-------------
-------------------------------------------------*/


void ModifInfo(CharacterInfo *c, char *name, char *newName)
{
	while(c->name != name)
	{
		c = c->next;
	}
	c->name = newName;
	c->image = Concat(name, "-Image");
	c->caracter = Concat(name,"-Caracter");
	FILE *file = NULL;
	file = fopen("RTFP.data", "r+");
	if(file != NULL)
	{
		printf("");	
	}	
	else
	{
		printf("impossible d'ouvrir le fichier RTFP.data");
	}
}


/*---Ecriture du fichier RTFP.data a partir le la liste---
---------------------------------------------------------*/
void WriteFile(CharacterInfo *c)
{
	FILE *file = NULL;
	file = fopen("RTFP.data", "w+");
	if(file != NULL)
	{
		do
		{
			char *a = NULL;
			fgets(a, 100, file);
			fseek(file, 0, SEEK_END);
			fprintf(file, "%s\n", c->name);
			c = c->next;
		}while(c != NULL);
		printf("fichier ecrit avec succes, merci!\n");
	}
	else
	{
		printf("impossible d'ecrit le fichier\n");
	}
	
}

/*----------Suppression d'un element---------------
-------------------------------------------------*/


CharacterInfo* RemoveInfo(CharacterInfo *c, char *name1)
{ 
	CharacterInfo *a = c;
	if(CompareChar(c->name, name1))
	{
		CharacterInfo *b = c;
		c = c->next;
		WriteFile(c);
		free(b);
		ConfigFile('-');
		RemoveFile (name1);
		return c;
	}
	else
	{
		while(!CompareChar(a->next->name, name1))
		{
			a = a->next;
			if(a->next == NULL)
				return c; 
		}
		ConfigFile('-');
		RemoveFile (name1);
		a->next = a->next->next;
		WriteFile(c);	
		return c;
	}
}



/*-------------------------Comparaison de *char---------------------
--------------------------------------------------------------------*/

int CompareChar(char *a, char *b)
{
	int i = 0;
	while(*(a+i) != '\0')
	{
		if(*(a+i) != *(b+i))
			return 0;
		i++;
	}
	return 1;
}


/*--Suppression des fichiers d'un element suprimé--
-------------------------------------------------*/

void RemoveFile (char *FileName)
{
	char *string = Concat("DataSave/",Concat(FileName, "-Caracter"));
	remove(string);
	string = Concat("DataSave/",Concat(FileName, "-Image"));
	remove(string);
}



/*-----------Modification fichier config-----------
-------------------------------------------------*/


void ConfigFile(char option)
{
	FILE *file = NULL;
	file = fopen("RTFP.config", "r+");
	if(file != NULL)
	{
		int nbC = 0;
		printf("Ouverture du fichier avec succé\n");
		if(option == '+')
		{
			fscanf(file, "%d", &nbC);
			fseek(file, 0, SEEK_SET);	
			fprintf(file, "%d\n", ++nbC);
		}
		else
		{		
			fscanf(file, "%d", &nbC);
			fseek(file, 0, SEEK_SET);
			fprintf(file, "%d\n", --nbC);
		}
		fclose(file);
	}
}

/*----Compte le nombre d'element dans la liste-----
-------------------------------------------------*/

int CountList(CharacterInfo *c)
{
	int nb = 0;
	while(c != NULL)
	{
		nb++;
		c = c->next;
	}
	return nb;
}


/*----Recupere le nb d'element dans le fichier-----
-------------------------------------------------*/

int CounterData()
{
	int a = 0;
	FILE *file = NULL;
	file = fopen("RTFP.config", "r+");
	if(file != NULL)
	{
		fscanf(file, "%d", &a);
		fseek(file, 0, SEEK_SET);
		if( a == 90){a=9;}
	}
	fclose(file);
	return a;

}

/*--------Affiche les elements de la liste----------
-------------------------------------------------*/

void ShowList(CharacterInfo *c)
{
	CharacterInfo *a = c;
	int nb = 1;
	if(CountList(c) != 0)
	{
	do
	{
		printf("Le nb %d s'appelle %s et Caracter = %s et Image = %s\n", nb, a->name, a->caracter, a->image);
		a = a->next;
		nb++;
	}while(a != NULL);
	}
}

/*-----Chargement et creation de la liste---------
----------------ITERATIF------------------------*/

CharacterInfo* ArrayData()
{
	FILE *file = NULL;
	file = fopen("RTFP.data", "r");
	CharacterInfo *c = NULL ;
	for(int i =1; i<=CounterData();i++)
	{	
		int pos = 0;
		char temp ;		
		char *t = malloc(50*sizeof(char));
		while((temp = fgetc(file)) != '\n')
		{
			*(t+pos)=temp;
			pos++;
		}
		c = AddInfoStart(c, t);
	}
	return c;
}

/*---------Chargement et creation de la liste------------
-----------------------RECURCIF------------------------*/


CharacterInfo* ArrayRec(int size)
{
	if(size == 0)
		return NULL;
	else{
		CharacterInfo *new = malloc(sizeof(CharacterInfo));
		FILE *file = fopen("RTFP.data", "r");
		char chaine[100] = "";
		for(int i = CounterData(); i>size; i--)
		{	
			fgets(chaine, 100, file);

		}
		new->name = chaine;

   

		new->next = ArrayRec(size-1);
		return new;
		}
}
