#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z, w, maior;
    scanf("%d %d %d %d", &x, &y, &z, &w);
    maior = x;
    if (y >= maior)
        maior = y;
    if (z >= maior)
        maior = z;
    if (w >= maior)
        maior = w;
    printf("%d", maior);
    return 0;
}