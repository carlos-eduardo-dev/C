#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MALLOC(structure, quantity) malloc(quantity * sizeof(structure))

typedef struct ponto
{
    double x;
    double y;
} Ponto;

void input(Ponto *ponto)
{
    scanf("%lf %lf", &ponto->x, &ponto->y);
}

double distancia(Ponto *p1, Ponto *p2)
{
    return (sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2)));
}

int main(void)
{
    Ponto *p1 = MALLOC(Ponto, 1);
    Ponto *p2 = MALLOC(Ponto, 1);

    input(p1);
    input(p2);

    printf("%.4lf\n", distancia(p1, p2));

    return (0);
}
