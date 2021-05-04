#include <stdio.h>

int main(void)
{
    int X;
    int count = 0;

    scanf("%d", &X);

    while (count < 5)
    {
        if (X % 2 != 0)
        {
            printf("%d\n", X);
            count++;
        }

        X++;
    }

    return (0);
}