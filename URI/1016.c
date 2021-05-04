#include <stdio.h>

int main(void)
{
    int x;
    printf("%d minutos\n", !scanf("%d", &x) ?: x * 2);

    return (0);
}