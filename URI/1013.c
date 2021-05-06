#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maiorAB = (a + b + abs(a - b)) / 2;
    printf("%d eh o maior\n", (maiorAB > c) ? maiorAB : c);

    return (0);
}