#include <stdio.h>

#define KMLITRO 12.0

int main(void)
{
    int velocidade, tempo;
    scanf("%d %d", &tempo, &velocidade);

    printf("%.3lf\n", ((velocidade * tempo) / KMLITRO));
    return (0);
}