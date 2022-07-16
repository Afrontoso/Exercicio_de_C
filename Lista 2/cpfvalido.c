#include <stdio.h>

int main (){
    unsigned long long int inteiroGrande;
    int inteiroMenor, CPF2, digit;
    int cont = 100000000, cont2 = 1000000000, 
    diminui = 10, diminui2 = 11, 
    verifica = 0, verifica2 = 0;

    scanf ("%llu", &inteiroGrande ); // suponha 12345678909
    inteiroMenor = inteiroGrande/100;
    
    CPF2 = inteiroMenor;

    while (cont > 0){
        digit = inteiroMenor / cont;
        verifica = verifica + (digit * diminui);
        digit *= cont;
        inteiroMenor -= digit;
        cont /= 10;
        diminui--;
    }
    verifica = (verifica*10)%11;
    if (verifica == 10)
        verifica = 00;
    
    long long lCPF2 = ((long long)(CPF2))*10;

    lCPF2 += verifica; 

    long long ldigit = ((long long)(digit));
    long long lverifica2 = ((long long)(verifica2));
    
    while (cont2 > 0){

        ldigit = lCPF2 / cont2;
        lverifica2 = lverifica2 + (ldigit * diminui2);
        ldigit *= cont2;
        lCPF2 -= ldigit;
        cont2 /= 10;
        diminui2--;
    }
    
    lverifica2 = (lverifica2*10)%11;
    if (lverifica2 == 10)
        lverifica2 = 0;

    verifica *= 10; 
    verifica2 += verifica;


    printf ("%llu\n" ,inteiroGrande); // vai imp rimi r 12345678909
    printf("%d\n", inteiroMenor); // vai imp rimi r 123456789
}