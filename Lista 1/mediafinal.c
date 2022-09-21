#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Prova_1, Prova_2, Prova_3,
          Trabalho,
          Lista_1, Lista_2, Lista_3, Lista_4, Lista_5,
          Media_F, Media_L;

    scanf ("%f %f %f\n", &Prova_1, &Prova_2, &Prova_3);
    scanf ("%f\n", &Trabalho);
    scanf ("%f %f %f %f %f", &Lista_1, &Lista_2, &Lista_3, &Lista_4, &Lista_5);

    Media_L = (Lista_1 + Lista_2  + Lista_3 + Lista_4 + Lista_5)/10;
    Media_F = ((Prova_1 + (2 * Prova_2) + (3 * Prova_3) + (2 * Trabalho))/8) + Media_L;
    

    printf("%.2f", Media_F);
    return 0 ;
}