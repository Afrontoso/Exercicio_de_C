#include <stdio.h>

int main(){
    int Nnum, i, j, k, l;

    scanf("%d", &Nnum);
    for(j=1; j<=Nnum; j++){
        for(i=1; i<=j; i++)
            printf("%02d ", j);
        printf("\n");
    }
    printf("\n");
    for(k=1; k<=Nnum; k++){
        for(l=1; l<=k; l++)
            printf("%02d ", l);
        printf("\n");
    }

    return 0;
}