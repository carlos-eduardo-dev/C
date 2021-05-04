#include <stdio.h>

#define QUANT_MIN_PARA_VER 40000000

int i = 0;

int main(void)
{
    int a = 0;
    scanf("%d", &a);

    int n = 0;
    scanf("%d", &n);

    int count = 0;

    for (i = 0; i < n; i++)
    {
        int f = 0;
        scanf("%d", &f);

        if ((f * a) >= QUANT_MIN_PARA_VER)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return (0);
}