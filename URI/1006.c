#include <stdio.h>

int i;
int main(void)
{
    int pesos[3] = {2, 3, 5};
    int peso = 0;
    double notas[3] = {0};
    double media = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%lf", &notas[i]);
        media += (notas[i] * pesos[i]);
        peso += pesos[i];
    }
    printf("MEDIA = %.1lf\n", media / peso);

    return (0);
}