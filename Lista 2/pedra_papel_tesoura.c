#include <stdio.h>
#include <stdlib.h>

int main(){
    int jogadorA, jogadorB;
    int pedra = 0, papel = 1, tesoura = 2,  lagarto = 3, spock = 4;

    scanf("%d\n%d", &jogadorA, &jogadorB);
    switch (jogadorA){
    case 0:
        if(jogadorA == jogadorB){
            printf ("empate");
        }else if(jogadorB == lagarto || jogadorB == tesoura){
            printf("A");
        } else if(jogadorB == papel || jogadorB == spock){
            printf("B");
        }
        break;
    case 1:
        if(jogadorA == jogadorB){
            printf ("empate");
        }else if(jogadorB == pedra || jogadorB == spock){
            printf("A");
        } else if(jogadorB == tesoura ||jogadorB == lagarto){
            printf("B");
        }
        break;
    case 2:
        if(jogadorA == jogadorB){
            printf ("empate");
        }else if(jogadorB == papel|| jogadorB == lagarto){
            printf("A");
        } else if(jogadorB == spock || jogadorB == pedra){
            printf("B");
        }
        break;
    case 3:
        if(jogadorA == jogadorB){
            printf ("empate");
        }else if(jogadorB ==  papel || jogadorB == spock){
            printf("A");
        } else if(jogadorB == pedra || jogadorB == tesoura){
            printf("B");
        }
        break;
    case 4:
        if(jogadorA == jogadorB){
            printf ("empate");
        }else if(jogadorB == pedra || jogadorB == tesoura){
            printf("A");
        } else if(jogadorB == papel || jogadorB == lagarto){
            printf("B");
        }
        break;
    default:
        printf("empate");
        break;
    }
    return 0;
}