#include <stdio.h>

int i = 0;

int main(void)
{
    int t = 0;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        int r1, r2 = 0;
        scanf("%d %d", &r1, &r2);

        printf("%d\n", r1 + r2);
    }

    return (0);
}