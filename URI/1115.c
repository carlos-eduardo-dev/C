#include <stdio.h>
#include <string.h>

int main(void)
{
    int X, Y;
    char message[25];

    while (scanf("%d", &X) && X && scanf("%d", &Y) && Y)
    {
        if (X > 0)
        {
            strcpy(message, Y > 0 ? "primeiro" : "quarto");
        }
        else
        {
            strcpy(message, Y > 0 ? "segundo" : "terceiro");
        }

        printf("%s\n", message);
    }

    return (0);
}