#include <stdio.h>

int main(void)
{
    int number, hours;
    float value;
    scanf("%d %d %f", &number, &hours, &value);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, (hours * value));
    return 0;
}