#include <stdio.h>

int i;

int main(void)
{
    const int qnt = 5;
    int X[qnt];

    int count = 0;

    for (i = 0; i < qnt; i++)
    {
        scanf("%d", &X[i]);
    }

    for (i = 0; i < qnt; i++)
    {
        if (X[i] % 2 == 0)
        {
            count++;
        }
    }

    printf("%d valores pares\n", count);

    return (0);
}