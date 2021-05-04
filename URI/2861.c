#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        char str[256] = {0};

        scanf("%[^\n]s", str);
        printf("gzuz\n");
    }
    return (0);
}