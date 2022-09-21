#include <stdio.h>

int main(){
    int Nnum, Xnum, cont, i;
    scanf("%d", &Nnum);
    while(Nnum !=0){
        /* if ((Xnum%2)==0){
            cont++;
        }
        if (cont == 2){
            Xnum/=10;
            while ((Xnum%i)==0){
                Xnum/=10;
            }  
        } */
        for (i=1; i<=Nnum; i++){
            scanf("%d", &Xnum);
            if ((Xnum%i)==0){
                cont++;
            }
            Xnum/=10;

            if (cont == 2){
                printf("S\n");
            }else {
                printf("N\n");
            }
        Nnum--;
        }
    }
    return 0;
}