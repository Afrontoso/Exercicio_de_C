#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Prova_1, Prova_2, Media_F;

   scanf ("%f %f", &Prova_1, &Prova_2);

   Media_F = (Prova_1 + Prova_2)/2;

    printf("%.2f", Media_F);
    return 0 ;
}