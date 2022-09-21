#include <stdio.h>

int main(){
    int Nnum;
    int somapar = 0, somaImpar = 0;
    scanf("%d", &Nnum);
    while(Nnum != 0){
        if (Nnum%2==0){
            somapar+=Nnum;
        }else{
            somaImpar+=Nnum;
        }
        scanf("%d", &Nnum);
    }
    printf("%d %d\n", somapar, somaImpar);
    return 0;
}