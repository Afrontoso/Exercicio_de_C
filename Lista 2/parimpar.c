#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha_A, j1a, j2b,
        escolha_C, j1c, j2d,
        escolha_X, j1x, j2y,
        parimpar;
    char ganhoab, ganhocd, ganhoxy;

    scanf("%d %d %d\n", &escolha_A, &j1a, &j2b);
    scanf("%d %d %d\n", &escolha_C, &j1c, &j2d);
    scanf("%d %d %d\n", &escolha_X, &j1x, &j2y);

    parimpar = j1a + j2b;
    if (escolha_A == 0){
        parimpar %= 2;
        if (parimpar == escolha_A){
            ganhoab = 'A';
        }else if (parimpar != escolha_A){
            ganhoab = 'B';
        }
    }
    else if (escolha_A == 1){
        parimpar %= 2;
        if (parimpar == escolha_A){
            ganhoab = 'A';
        }
        else if (parimpar != escolha_A){
            ganhoab = 'B';
        }
    }
    parimpar = j1c + j2d;
    if (escolha_C == 0){
        parimpar %= 2;
        if (parimpar == escolha_A){
            ganhocd = 'C';
        }
        else if (parimpar != escolha_A){
            ganhocd = 'D';
        }
    }else if (escolha_C == 1){
        parimpar %= 2;
        if (parimpar == escolha_A){
            ganhocd = 'C';
        }else if (parimpar != escolha_A){
            ganhocd = 'D';
        }
    }

    if (ganhoab == 'A' && ganhocd == 'C'){
        parimpar = j1x + j2y;
        if (escolha_X == 0){
            parimpar %= 2;
            if (parimpar == escolha_X){
                printf("%c", ganhoab);
            }else if (parimpar != escolha_X){
                printf("%c", ganhocd);
            }
        }else if (escolha_X == 1){
            parimpar %= 2;
            if (parimpar == escolha_X){
                printf("%c", ganhoab);
            }else if (parimpar != escolha_X){
                printf("%c", ganhocd);
            }
        }
    }else if (ganhoab == 'A' && ganhocd == 'D'){
        parimpar = j1x + j2y;
        if (escolha_X == 0){
            parimpar %= 2;
            if (parimpar == escolha_X){
                printf("%c", ganhoab);
            }else if (parimpar != escolha_X){
                printf("%c", ganhocd);
            }
        }else if (escolha_X == 1){
            parimpar %= 2;
            if (parimpar == escolha_X){
                printf("%c", ganhoab);
            }else if (parimpar != escolha_X){
                printf("%c", ganhocd);
            }
        }
    }else if (ganhoab == 'B' && ganhocd == 'C'){
        parimpar = j1x + j2y;
        if (escolha_X == 0){
            parimpar %= 2;
            if (parimpar == escolha_X){
                printf("%c", ganhoab);
            }else if (parimpar != escolha_X){
                printf("%c", ganhocd);
            }
        }else if (escolha_X == 1){
            parimpar %= 2;
            if (parimpar == escolha_X){
                printf("%c", ganhoab);
            }else if (parimpar != escolha_X){
                printf("%c", ganhocd);
            }
        }
    }else if (ganhoab == 'B' && ganhocd == 'D'){
        parimpar = j1x + j2y;
        if (escolha_X == 0){
            parimpar %= 2;
            if (parimpar == escolha_X){
                printf("%c", ganhoab);
            }else if (parimpar != escolha_X){
                printf("%c", ganhocd);
            }
        }else if (escolha_X == 1){
            parimpar %= 2;
            if (parimpar == escolha_X){
                printf("%c", ganhoab);
            }else if (parimpar != escolha_X){
                printf("%c", ganhocd);
            }
        }
    }
    return 0;
}