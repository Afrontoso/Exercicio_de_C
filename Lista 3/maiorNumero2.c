#include <stdio.h>

int main(){
    int n, maior, i;
    int compara = -2147483647;
    scanf("%d", &n);

    for  (i = 0; i != n; i++){
        scanf("%d", &maior);
        if (maior >= compara){
            compara = maior;
        }
    }
    printf("%d", compara);
    return 0;
}