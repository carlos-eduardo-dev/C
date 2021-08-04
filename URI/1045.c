#include <stdio.h>
#include <math.h>

#define NAO_FORMA_TRIANGULO "NAO FORMA TRIANGULO"
#define TRIANGULO_RETANGULO "TRIANGULO RETANGULO"
#define TRIANGULO_OBTUSANGULO "TRIANGULO OBTUSANGULO"
#define TRIANGULO_ACUTANGULO "TRIANGULO ACUTANGULO"
#define TRIANGULO_EQUILATERO "TRIANGULO EQUILATERO"
#define TRIANGULO_ISOSCELES "TRIANGULO ISOSCELES"
#define MAIOR(a, b) ((a + b + abs(a - b)) / 2)
#define MENOR(a, b, x) (maior == a ? b : a)

void nao_triangulo(double, double, double);
void retangulo(double, double, double);
void obtusangulo(double, double, double);
void acutangulo(double, double, double);
void equilatero(double, double, double);
void isosceles(double, double, double);
void verifica(double, double, double);

int main(void)
{
    double A, B, C, maior, menor;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A > 0 && B > 0 && C > 0)
    {
        verifica(A, B, C);
    }

    return 0;
}

void verifica(double a, double b, double c)
{
    double temp;
    if (b > a)
    {
        temp = a;
        a = b;
        b = a;
    }

    if (c > a)
    {
        temp = a;
        a = c;
        c = temp;
    }

    if (c > b)
    {
        temp = b;
        b = c;
        c = temp;
    }

    nao_triangulo(a, b, c);
    retangulo(a, b, c);
    obtusangulo(a, b, c);
    acutangulo(a, b, c);
    equilatero(a, b, c);
    isosceles(a, b, c);
}

void nao_triangulo(double a, double b, double c)
{
    if (a >= (b + c))
    {
        printf("%s\n", NAO_FORMA_TRIANGULO);
    }
}

void retangulo(double a, double b, double c)
{
    if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
    {
        printf("%s\n", TRIANGULO_RETANGULO);
    }
}

void obtusangulo(double a, double b, double c)
{
    if (pow(a, 2) > (pow(b, 2) + pow(c, 2)))
    {
        printf("%s\n", TRIANGULO_OBTUSANGULO);
    }
}

void acutangulo(double a, double b, double c)
{
    if (pow(a, 2) < (pow(b, 2) + pow(c, 2)))
    {
        printf("%s\n", TRIANGULO_ACUTANGULO);
    }
}
void equilatero(double a, double b, double c)
{
    if (a == b && b == c)
    {
        printf("%s\n", TRIANGULO_EQUILATERO);
    }
}
void isosceles(double a, double b, double c)
{
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
    {
        printf("%s\n", TRIANGULO_ISOSCELES);
    }
}