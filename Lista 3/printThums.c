#include <stdio.h>

int main(){
    int repete, controlador, i;
    int contador = 0;
    scanf("%d", &repete);
    controlador = repete;

    for (i = 1; i <= repete; i++){
        if(i%2!=0){
            printf("THUMS THUMS THUMS\n");
        }else{
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
    }
    return 0;
}