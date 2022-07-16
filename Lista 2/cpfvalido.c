#include <stdio.h>

int main (){
    unsigned long long int inteiroGrande, inteiroMenor;
    int CPF, CPF2, digit;
    int cont = 100000000, cont2 = 1000000000, 
    diminui = 10, diminui2 = 11, 
    verifica = 0, verifica2 = 0;

    scanf ("%llu", &inteiroGrande );
    inteiroMenor = inteiroGrande/100;

    CPF= inteiroMenor;
    CPF2 = inteiroMenor;

    while (cont > 0){
        digit = CPF / cont;
        verifica = verifica + (digit * diminui);
        digit *= cont;
        CPF -= digit;
        cont /= 10;
        diminui--;   
    }
    verifica = (verifica*10)%11;
    if (verifica == 10)
        verifica = 0;

    long long lCPF2 = ((long long)(CPF2))*10;

    lCPF2 += verifica; 

    long long ldigit = ((long long)(digit));
    long long lverifica2 = ((long long)(verifica2));
    
    while (cont2 > 0){

        ldigit = lCPF2 / cont2;
        lverifica2 = lverifica2 + (ldigit*diminui2);
        ldigit *= cont2;
        lCPF2 -= ldigit;
        cont2 /= 10;
        diminui2--;
    }
    
    lverifica2 = (lverifica2*10)%11;
    if (lverifica2 == 10)
        lverifica2 = 0;
    verifica *= 10; 
    lverifica2 += verifica;
    inteiroMenor = (inteiroMenor*100)+lverifica2;

    if (inteiroGrande == inteiroMenor){
        printf("valido\n");
    } else{
        printf("invalido\n");
    }
}