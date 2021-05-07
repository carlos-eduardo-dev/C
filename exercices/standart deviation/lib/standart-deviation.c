#include "standart-deviation.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct list
{
    long int size;
    Node *head;
};

struct node
{
    Element *element;
    Node *next;
};

struct element
{
    long double value;
};

List *createList()
{
    List *list = MALLOC(List, 1);
    if (list == NULL)
    {
        return NULL;
    }

    list->size = 0;
    list->head = NULL;
    return list;
}

Node *createNode()
{
    Node *node = MALLOC(Node, 1);
    if (node == NULL)
    {
        return NULL;
    }

    node->element = NULL;
    node->next = NULL;
    return node;
}

Element *createElement()
{
    Element *element = MALLOC(Element, 1);
    if (element == NULL)
    {
        return NULL;
    }

    element->value = 0;
    return element;
}

void push(List *list, long double value)
{
    if (list == NULL)
    {
        return;
    }

    Node *node = createNode();
    Element *element = createElement();

    element->value = value;

    node->element = element;
    node->next = list->head;
    list->head = node;
    list->size++;
}

long double pop(List *list)
{
    if (list == NULL)
    {
        return 0;
    }

    long double _value;

    Node *head = list->head;
    list->head = list->head->next;

    _value = head->element->value;
    free(head);

    list->size--;
    return _value;
}

long int indexOf(List *list, long double value)
{
    if (list == NULL)
    {
        return -1;
    }

    Node *pointer;
    long int _index = 0;
    for (pointer = list->head; pointer != NULL; pointer = pointer->next)
    {
        if (pointer->element->value == value)
        {
            return _index;
        }
        _index++;
    }

    return (-1);
}

Node *atIndex(List *list, long int index)
{
    if (list == NULL)
    {
        return NULL;
    }
    else if (index > list->size || index < 0)
    {
        return NULL;
    }

    Node *pointer = list->head;
    int i;
    for (i = 0; i < index; i++)
    {
        if (pointer->next == NULL)
        {
            return NULL;
        }

        pointer = pointer->next;
    }

    return pointer;
}

long double erase(List *list, long double index)
{
    if (list == NULL)
    {
        return 0;
    }

    Node *node = atIndex(list, index);

    long int _index = indexOf(list, node->element->value);
    long double _value;

    if (_index == 0)
    {
        return pop(list);
    }

    Node *previous = atIndex(list, _index - 1);
    Node *next = atIndex(list, _index + 1);
    previous->next = next;

    _value = node->element->value;
    free(node);

    list->size--;
    return _value;
}

long int size(List *list)
{
    if (list == NULL)
    {
        return -1;
    }

    return list->size;
}

void sort(List *list, char *order)
{
    int swapped, i;
    Node *start = atIndex(list, 0);
    Node *node;
    Node *lptr = NULL;

    if (strcasecmp("asc", order) == 0)
    {
        if (start == NULL)
            return;

        do
        {
            swapped = 0;
            node = start;

            while (node->next != lptr)
            {
                if (node->element->value > node->next->element->value)
                {
                    swap(node, node->next);
                    swapped = 1;
                }
                node = node->next;
            }
            lptr = node;
        } while (swapped);
    }
    else
    {
        if (start == NULL)
            return;
        do
        {
            swapped = 0;
            node = start;

            while (node->next != lptr)
            {
                if (node->element->value < node->next->element->value)
                {
                    swap(node, node->next);
                    swapped = 1;
                }
                node = node->next;
            }
            lptr = node;
        } while (swapped);
    }
}

void swap(Node *a, Node *b)
{
    long double aux = a->element->value;
    a->element->value = b->element->value;
    b->element->value = aux;
}

void print(List *list, char *order)
{
    if (list == NULL)
    {
        printf("List not allocated!\n");
        return;
    }
    else if (strcasecmp("asc", order) != 0 && strcasecmp("desc", order) != 0)
    {
        printf("Invalid order!\n");
        return;
    }
    sort(list, order);

    Node *pointer = list->head;
    long int _count = 1;

    printf("Elements: [index] [value]\n");
    while (pointer != NULL)
    {
        printf(" [%ld] [%Lf]", _count - 1, pointer->element->value);
        if (_count % 5 == 0)
        {
            printf("\n");
        }

        _count++;
        pointer = pointer->next;
    }

    printf("%c", (_count % 15 != 0) ? '\n' : '\0');
}

long double average(List *list)
{
    long double _average = 0;
    long double _total = total(list);

    _average = _total / size(list);

    return _average;
}

long double deviation(List *list)
{
    double _deviation = 0;

    _deviation = summation(list) / (size(list) - 1);

    return sqrt(_deviation);
}

long double summation(List *list)
{
    double _summation = 0;
    double _average = average(list);

    Node *pointer;

    for (pointer = list->head; pointer != NULL; pointer = pointer->next)
    {
        _summation += pow((pointer->element->value - _average), 2);
    }

    return _summation;
}

long double total(List *list)
{
    if (list == NULL)
    {
        return 0;
    }

    Node *pointer;
    long double _total = 0;

    for (pointer = list->head; pointer != NULL; pointer = pointer->next)
    {
        _total += pointer->element->value;
    }
    return _total;
}
