//Super fichier .h de la B de D :P

typedef struct CharacterInfo CharacterInfo;

void ShowList(CharacterInfo *c);
void RemoveFile (char *FileName);
void ModifInfo(CharacterInfo *c, char *name, char *newName);
void WriteFile(CharacterInfo *c);
void ConfigFile(char oprion);

int CountList(CharacterInfo *c);
int CounterData();
int CompareChar(char *a, char *b);

char* Concat(char *a, char *b);

CharacterInfo* AddInfoStart(CharacterInfo *c, char *name);
CharacterInfo* AddInfo(CharacterInfo *c, char *name);
CharacterInfo* AddBatch(CharacterInfo *c, char **tab);
CharacterInfo* RemoveInfo(CharacterInfo *c, char *name);
CharacterInfo* ArrayData();
CharacterInfo* ArrayRec(int size);

struct CharacterInfo
{
	char *name;
	char *image;
	char *caracter;	
	CharacterInfo *next;
};


