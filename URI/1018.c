#include <stdio.h>

const int cem = 100, cinqueta = 50, vinte = 20, dez = 10, cinco = 5, dois = 2, um = 1;
void calculate(int value)
{
    printf("%d\n", value);
    printf("%d nota(s) de R$ 100,00\n", value / cem);
    value %= cem;
    printf("%d nota(s) de R$ 50,00\n", value / cinqueta);
    value %= cinqueta;
    printf("%d nota(s) de R$ 20,00\n", value / vinte);
    value %= vinte;
    printf("%d nota(s) de R$ 10,00\n", value / dez);
    value %= dez;
    printf("%d nota(s) de R$ 5,00\n", value / cinco);
    value %= cinco;
    printf("%d nota(s) de R$ 2,00\n", value / dois);
    value %= dois;
    printf("%d nota(s) de R$ 1,00\n", value / um);
}

int main(void)
{
    int valor;
    scanf("%d", &valor);

    calculate(valor);

    return (0);
}