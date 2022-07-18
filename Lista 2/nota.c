#include <stdio.h>

int main(){
    int base, topo, area, retangulo, triangulo, baseTriangulo, areaResto;
    int areaTotal = 11200;
    scanf("%d\n%d", &base, &topo);

    if (base >= topo)
    {
        baseTriangulo = base - topo;
        retangulo = topo * 70;
        triangulo = (baseTriangulo * 70) / 2;
        area = triangulo + retangulo;
        areaResto = areaTotal - area;
        if (area == areaResto)
        {
            printf("0");
        }
        else if (area > areaResto)
        {
            printf("1");
        }
        else if (area < areaResto)
        {
            printf("2");
        }
    }
    else if (topo > base)
    {
        baseTriangulo = topo - base;
        retangulo = base * 70;
        triangulo = (baseTriangulo * 70) / 2;
        area = triangulo + retangulo;
        areaResto = areaTotal - area;

        if (area == areaResto)
        {
            printf("0");
        }
        else if (area > areaResto)
        {
            printf("1");
        }
        else if (area < areaResto)
        {
            printf("2");
        }
    }
    return 0;
}