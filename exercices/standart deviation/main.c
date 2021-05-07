#include <stdio.h>
#include "./lib/standart-deviation.h"

short int task();

int main(void)
{
    List *list = createList();
    short int _task = 0;
    char order[5] = {0};
    long double value;
    long int index;

    do
    {
        _task = task();

        switch (_task)
        {
        case 1:
            printf("Value: ");
            scanf("%Lf", &value);
            push(list, value);
            break;
        case 2:
            print(list, "desc");
            printf("Element index: ");
            scanf("%ld", &index);
            erase(list, index);
            break;
        case 3:
            printf("Order [asc/desc]: ");
            fflush(stdin);
            scanf("%s", order);
            print(list, order);
            break;
        case 4:
            printf("List size: [%ld]\n", size(list));
            break;
        case 5:
            printf("List average: [%Lf]\n", average(list));
            break;
        case 6:
            printf("List standart deviation: [%Lf]\n", deviation(list));
            break;
        case 7:
            printf("List total: [%Lf]\n", total(list));
            break;
        case 0:
            printf("Bye!\n");
            break;
        default:
            printf("Task not found!\n");
            break;
        }
    } while (_task != 0);

    return (0);
}

short int task()
{
    printf("=========================================\n");
    printf("==== Choose the task to be performed ====\n");
    printf("=========================================\n");
    printf(" [ 1 ] Insert an element\n");
    printf(" [ 2 ] Remove an element\n");
    printf(" [ 3 ] Show all elements\n");
    printf(" [ 4 ] Show list size\n");
    printf(" [ 5 ] Calculate average value\n");
    printf(" [ 6 ] Calculate standart deviation value\n");
    printf(" [ 7 ] Calculate total\n");
    printf(" [ 0 ] Exit\n");
    printf("=========================================\n");

    short int _task = 0;
    scanf("%hd", &_task);

    return _task;
}