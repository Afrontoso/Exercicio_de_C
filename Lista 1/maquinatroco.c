#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Valor_produto, Valor_inserido, troco;
    int quin, cem, cin, dez, cinco, um;
    
    quin = cem = cin = dez = cinco = um = 0;

    scanf ("%d\n%d", &Valor_produto, &Valor_inserido);
    

    if (Valor_produto < Valor_inserido){
        troco = Valor_inserido - Valor_produto;
        if (troco >= 500){
            quin = troco / 500;
            troco %= 500; 
        }
        else if (troco >= 100){
            cem = troco / 100;
            troco %= 100;
        }else if (troco > 50){
            cin = troco % 50;
            troco /= 50;
        }else if (troco > 10){
            dez = troco % 10;
            troco /= 10;
        }else if (troco > 5){
            cinco = troco % 5;
            troco /= 5;
        }else {
            um = troco / 1;
        } 
    }

    printf("%d\n%d\n%d\n%d\n%d\n%d", quin, cem, cin, dez, cinco, um);
}