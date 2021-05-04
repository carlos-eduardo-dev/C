#include <stdio.h>
#include <math.h>
int i;

int main(void)
{
    int N;
    scanf("%d", &N);

    if (N > 1 && N < 1000)
    {
        int count = 1;
        for (i = 0; i < N; i++)
        {
            printf("%d %d %d\n", count, (int)pow(count, 2), (int)pow(count, 3));
            printf("%d %d %d\n", count, (int)(pow(count, 2) + 1), (int)(pow(count, 3) + 1));
            count++;
        }
    }

    return (0);
}