#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        char buffer[101] = {0};
        fgets(buffer, 100, stdin);
    }
    printf("Ciencia da Computacao\n");
    return (0);
}