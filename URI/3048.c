#include <stdio.h>

int i;

int main()
{
    int n = 0;
    scanf("%d", &n);

    int v = 0;
    int amount = 0;

    for (i = 0; i < n; i++)
    {
        int x = v;
        scanf("%d", &v);

        amount += v != x ? 1 : 0;
    }

    printf("%d\n", amount);

    return 0;
}