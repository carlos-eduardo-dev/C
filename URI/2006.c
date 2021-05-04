#include <stdio.h>

int i;

int main(void)
{
    int T;
    scanf("%d", &T);

    if (T < 1 && T > 4)
    {
        return (0);
    }

    const int qnt = 5;
    int X[qnt];

    int hits = 0;

    for (i = 0; i < qnt; i++)
    {
        int buffer;
        scanf("%d", &buffer);

        if (buffer >= 1 && buffer <= 4)
        {
            X[i] = buffer;
        }
        else
        {
            return (0);
        }
    }

    for (i = 0; i < qnt; i++)
    {
        if (X[i] == T)
        {
            hits++;
        }
    }

    printf("%d\n", hits);

    return (0);
}