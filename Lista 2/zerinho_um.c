#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == B && B == C){
        printf("empate");
    } else if (A == 1 && B == 0 && C== 0){
        printf("A");
    } else if (A == 0 && B == 1 && C== 1){
        printf("A");
    } else if (A == 0 && B == 1 && C== 0){
        printf("B");
    } else if (A == 1 && B == 0 && C== 1){
        printf("B");
    } else if (A == 0 && B == 0 && C== 1){
        printf("C");
    } else if (A == 1 && B == 1 && C== 0){
        printf("C");
    }
    return 0;
}