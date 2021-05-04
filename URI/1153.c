#include <stdio.h>

int i;

int main(void)
{
    int N;
    scanf("%d", &N);

    if (N > 0 && N < 13)
    {
        int result = 1;

        for (i = 0; i < N; i++)
        {
            result *= (N - i);
        }

        printf("%d\n", result);
    }

    return 0;
}