#include <stdio.h>

int i;

int main()
{

    int N;
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {

        if ((N % i) == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}