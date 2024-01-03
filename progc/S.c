#include "S.h"

int main()
{

    pArbre a = NULL;
    pArbre b = NULL;

    FILE *chemin = fopen("temp/gnuplot_data_S.txt", "w");
    if (chemin == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier");
        exit(1);
    }

    int RouteID;
    float distance;
    while (fscanf(chemin, "%d;%f\n", &RouteID, &distance) == 2)
    {
        int h = 0;
        a = insertionAVLTrajet(a, RouteID, distance, &h);
    }
    fclose(chemin);
    creationArbreFinal(a, b);
    FILE *chemin2 = fopen("temp/gnuplot_data_S.txt", "a");
    if (chemin2 == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier");
        exit(1);
    }
    infixeInverse(chemin2, b);
    fclose(chemin2);

    return 0;
}