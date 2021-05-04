#include <stdio.h>

int i;

int main(void)
{
    const int qnt = 4;
    int T[qnt];

    int total = 0;

    for (i = 0; i < qnt; i++)
    {
        int buffer;
        scanf("%d", &buffer);

        if (buffer >= 2 && buffer <= 6)
        {
            T[i] = buffer;
        }
        else
        {
            return (0);
        }
    }

    for (i = 0; i < qnt; i++)
    {
        if (i != (qnt - 1))
        {
            total += (T[i] - 1);
        }
        else
        {
            total += T[i];
        }
    }

    printf("%d\n", total);

    return (0);
}