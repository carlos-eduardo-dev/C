#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int isTriangle(double, double, double);
int validate(double, double, double);

int main(void)
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (isTriangle(a, b, c) == TRUE)
    {
        printf("Perimetro = %.1f\n", (a + b + c));
    }
    else
    {
        printf("Area = %.1f\n", ((a + b) * c) / 2);
    }
    return (0);
}

int isTriangle(double a, double b, double c)
{
    if (validate(a, b, c) == TRUE && validate(b, a, c) == TRUE && validate(c, a, b) == TRUE)
    {
        return TRUE;
    }

    return FALSE;
}

int validate(double x, double y, double z)
{
    if (abs(y - z) < x && x < y + z)
    {
        return TRUE;
    }
    return FALSE;
}
