#include <stdio.h>

typedef enum lanches
{
    CachorroQuente = 1,
    XSalada,
    XBacon,
    TorradaSimples,
    Refrigerante
} Lanches;

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    switch (x)
    {
    case CachorroQuente:
        printf("Total: R$ %.2f\n", y * 4.0);
        break;

    case XSalada:
        printf("Total: R$ %.2f\n", y * 4.50);
        break;
    case XBacon:
        printf("Total: R$ %.2f\n", y * 5.0);
        break;
    case TorradaSimples:
        printf("Total: R$ %.2f\n", y * 2.0);
        break;
    case Refrigerante:
        printf("Total: R$ %.2f\n", y * 1.50);
        break;
    default:
        break;
    }

    return (0);
}