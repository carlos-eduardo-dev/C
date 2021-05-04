#include <stdio.h>

int i;

int main(void)
{
    int N;
    scanf("%d", &N);

    if (N >= 1 && N <= 1000)
    {
        int dist = 0;

        for (i = 0; i < N; i++)
        {
            int T, V;
            scanf("%d %d", &T, &V);

            if ((T >= 1 && T <= 100) && (V >= 0 && V <= 120))
            {
                dist += T * V;
            }
            else
            {
                return (0);
            }
        }

        printf("%d\n", dist);
    }

    return (0);
}