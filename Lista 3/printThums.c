#include <stdio.h>

int main(){
    int repete, controlador;
    int contador = 0;
    scanf("%d", &repete);
    controlador = repete;

    while(contador != controlador){
        if(repete%2!=0){
            printf("THUMS THUMS THUMS\n");
        }else{
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
        contador++;
        repete--;
    }
    return 0;
}