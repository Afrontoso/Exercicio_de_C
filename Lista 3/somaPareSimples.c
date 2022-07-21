#include <stdio.h>

int main(){
    int Xnum, i;
    int soma=0;
    scanf("%d", &Xnum);
    while (Xnum != 0){
        if (Xnum%2==0){
            soma+=Xnum;
        }
        scanf("%d", &Xnum);
    }
    printf("%d\n", soma);
    return 0;
}