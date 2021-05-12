#include <stdio.h>

const int cem = 100, cinqueta = 50, vinteCinco = 25, vinte = 20, dez = 10, cinco = 5, dois = 2, um = 1;

void banknotes(int value)
{
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", value / cem);
    value %= cem;
    printf("%d nota(s) de R$ 50.00\n", value / cinqueta);
    value %= cinqueta;
    printf("%d nota(s) de R$ 20.00\n", value / vinte);
    value %= vinte;
    printf("%d nota(s) de R$ 10.00\n", value / dez);
    value %= dez;
    printf("%d nota(s) de R$ 5.00\n", value / cinco);
    value %= cinco;
    printf("%d nota(s) de R$ 2.00\n", value / dois);
}

void coins(double value)
{
    int fraction = value;
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", fraction % cem % cinqueta % vinte % dez % cinco % dois);
    fraction = (value - fraction) * 100;
    fraction %= cem;
    printf("%d moeda(s) de R$ 0.50\n", fraction / cinqueta);
    fraction %= cinqueta;
    printf("%d moeda(s) de R$ 0.25\n", fraction / vinteCinco);
    fraction %= vinteCinco;
    printf("%d moeda(s) de R$ 0.10\n", fraction / dez);
    fraction %= dez;
    printf("%d moeda(s) de R$ 0.05\n", fraction / cinco);
    fraction %= cinco;
    printf("%d moeda(s) de R$ 0.01\n", fraction / um);
}

int main(void)
{
    double valor;
    scanf("%lf", &valor);

    banknotes(valor);
    coins(valor);

    return (0);
}