#include <stdio.h>

int main(void)
{
    double salary, sales;
    char name;
    scanf("%s %lf %lf", &name, &salary, &sales);

    printf("TOTAL = R$ %.2lf\n", salary + (sales * 0.15));
    return 0;
}