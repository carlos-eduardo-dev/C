#include <stdio.h>

int main(void)
{
    int days, years = 0, months = 0;
    scanf("%d", &days);

    years = days / 365;
    months = (days % 365) / 30;
    days = (days % 365) % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return (0);
}