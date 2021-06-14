#include <stdio.h>
#include <stdlib.h>

int i;
int main(void)
{
    int a, b, maior, menor;
    scanf("%d %d", &a, &b);

    maior = ((a + b + abs(a - b)) / 2);
    menor = maior == a ? b : a;
    for (i = 0; i < maior; i++)
    {
        if (menor * i == maior)
        {
            printf("Sao Multiplos\n");
            return (0);
        }
    }
    printf("Nao sao Multiplos\n");
    return (0);
}