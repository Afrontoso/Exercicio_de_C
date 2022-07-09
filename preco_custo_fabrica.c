#include <stdio.h>
#include <stdlib.h>

int main()
{
    double custo, preco_final;
    int taxa_imposto, taxa_lucro;

    scanf("%lf\n%d %d", &preco_final, &taxa_lucro, &taxa_imposto);

    double ftaxa_lucro = ((double)(taxa_lucro));
    double ftaxa_imposto = ((double)(taxa_imposto));
    custo = preco_final/(1+(ftaxa_imposto/100)+(ftaxa_lucro/100));
    printf ("%lf", custo);
}