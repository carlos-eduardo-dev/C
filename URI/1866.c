#include <stdio.h>

int main(void)
{
    int C;
    scanf("%d", &C);

    for (int i = 0; i < C; i++)
    {
        int N;
        scanf("%d", &N);

        if (N >= 1 && N <= 1000)
        {
            int result;

            if (N % 2 == 0)
            {
                result = 0;
            } else
            {
                result = 1;
            }
            
            

            printf("%d\n", result);
        }
        else
        {
            break;
        }
    }
    return (0);
}