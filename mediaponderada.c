#include <stdio.h>
#include <stdlib.h>

int main()
{
    double media,
    x1, x2,
    p1, p2;

    scanf("%lf\n %lf\n %lf %lf", &media, &x2, &p1, &p2);

    x1 =  ((media*(p1+p2))-(x2*p2))/p1; 

    printf("%lf", x1);
}