#ifndef AVL_T_H
#define AVL_T_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define SIZE1 4
#define SIZE2 50
#define SIZE3 5
#define ALLOC_ERROR 77


typedef struct _b
{
    int ID_route;
    struct _b *fg;
    struct _b *fd;
    int equilibre;
    char nomVille;
    int count;
} Arbre;


typedef struct {
    int ID_route;
    char nomVille;
} insertVille;


typedef Arbre* pArbre;

pArbre creerArbre(int ID_route, char nomVille, int compte);

pArbre creationArbreFinal(pArbre a, pArbre b);

void infixeInverse(FILE* chemin, pArbre a, int *i);

pArbre insertionAVLTrajet(pArbre a, int ID_route, char nomVille, int compte, int *h);

void libererArbre(pArbre a);

pArbre creerArbreEntier(int ID_route, char nomVille, int compte);

int min(int a, int b);

int max(int a, int b);

float max_f(float a,float b);

float min_f(float a, float b);

int existeFilsDroit(pArbre a);

pArbre insertionAVL(pArbre a, int ID_route, char nomVille, int compte, int *h);

pArbre rotationGauche(pArbre a);

pArbre rotationDroit(pArbre a);

pArbre doubleRotationGauche(pArbre a);

pArbre doubleRotationDroit(pArbre a);

pArbre equilibrerAVL(pArbre a);

#endif





