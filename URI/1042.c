#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

typedef struct list
{
    int values[SIZE];
} List;

void order(List *list);
void print(List *list);

int i, j;
int main()
{
    List list, orderList;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &list.values[i]);
    }

    orderList = list;
    order(&orderList);

    print(&orderList);
    printf("\n");
    print(&list);

    return (0);
}

void order(List *list)
{
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (list->values[i] > list->values[j])
            {
                int temp = list->values[i];
                list->values[i] = list->values[j];
                list->values[j] = temp;
            }
        }
    }
}

void print(List *list)
{
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", list->values[i]);
    }
}