#include <stdio.h>

int main(void)
{
    double value, total;
    int code, quantity;

    scanf("%d %d %lf", &code, &quantity, &value);
    total += quantity * value;
    scanf("%d %d %lf", &code, &quantity, &value);
    total += quantity * value;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}