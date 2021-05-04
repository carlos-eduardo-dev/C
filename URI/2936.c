#include <stdio.h>

int i;

int main(void)
{
    int x;
    int count = 5;

    int curupira = 300, boitata = 1500, boto = 600, mapinguari = 1000, iara = 150, chica = 225;

    int total = 0;

    for (i = 0; i < count; i++)
    {
        scanf("%d", &x);
        switch (i)
        {
        case 0:
            total += x * curupira;
            break;

        case 1:
            total += x * boitata;
            break;

        case 2:
            total += x * boto;
            break;

        case 3:
            total += x * mapinguari;
            break;

        case 4:
            total += x * iara;
            break;
        default:
            break;
        }
    }

    printf("%d\n", total + chica);

    return (0);
}