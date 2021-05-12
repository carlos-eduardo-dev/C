#include <stdio.h>

int main(void)
{
    float value;
    int interval[4][2] = {{0, 25}, {25, 50}, {50, 75}, {75, 100}};
    scanf("%f", &value);

    if (value >= interval[0][0] && value <= interval[0][1])
    {
        printf("Intervalo [0,25]\n");
        return (0);
    }
    else
    {
        int i;
        for (i = 1; i < 4; i++)
        {
            if (value > interval[i][0] && value <= interval[i][1])
            {
                printf("Intervalo (%d,%d]\n", interval[i][0], interval[i][1]);
                return (0);
            }
        }
    }

    printf("Fora de intervalo\n");
    return (0);
}