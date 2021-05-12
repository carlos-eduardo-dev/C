#include <stdio.h>

int main(void)
{
    int time, hours = 0, minutes = 0, seconds = 0;

    scanf("%d", &time);

    hours = time / 3600;
    minutes = (time % 3600) / 60;
    seconds = time % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return (0);
}