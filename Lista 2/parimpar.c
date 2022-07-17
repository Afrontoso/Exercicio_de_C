#include <stdio.h>

int main() {
    int e, j1, j2;
    char jogada1, jogada2, jogada3;

    scanf("%d %d %d", &e, &j1, &j2);
    jogada1 = (j1 + j2) % 2 == e ? 'A' : 'B';
    scanf("%d %d %d", &e, &j1, &j2);
    jogada2 = (j1 + j2) % 2 == e ? 'C' : 'D';
    scanf("%d %d %d", &e, &j1, &j2);
    jogada3 = (j1 + j2) % 2 == e ? jogada1 : jogada2;

    printf("%c\n", jogada3);

    return 0;
}   