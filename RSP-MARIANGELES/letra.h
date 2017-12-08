#ifndef LETRA_H_INCLUDED
#define LETRA_H_INCLUDED

typedef struct
{
    char letra[2];
    char nombre[21];
    int vocal;
    int consonante;
} eLetra;

char* letra_getLetra(eLetra* this);
void letra_setLetra(eLetra* this, char* unaLetra);
char* letra_getNombre(eLetra* this);
void letra_setNombre(eLetra* this, char* unNombre);
int* letra_getVocal(eLetra* this);
void letra_setVocal(eLetra* this, int* unaVocal);
int* letra_getConsonante(eLetra* this);
void letra_setConsonante(eLetra* this, int* unaConsonante);

eLetra* letra_new(void);

void letra_print(eLetra* this);
int esVocal(char unaLetra);
int letra_compare(eLetra* Alfa, eLetra* Beta);

#endif // LETRA_H_INCLUDED

