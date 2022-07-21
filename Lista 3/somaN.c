#include <stdio.h>

int main (){
    int Nnum, Xnum;
    int soma = 0;
    scanf("%d", &Nnum);

    while(Nnum!=0){
        scanf("%d", &Xnum);
        soma += Xnum;
        Nnum--;
    }
    printf("%d", soma);
    return 0;
}