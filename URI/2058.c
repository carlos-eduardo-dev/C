#include <stdio.h>

int main()
{
    int n;
    printf("%d\n", !scanf("%d", &n) ?: (n - 2));

    return 0;
}