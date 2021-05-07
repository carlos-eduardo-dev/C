#ifndef DEVIATION_H

// lib definition
#define DEVIATION_H

// malloc function
#define MALLOC(structure, quantity) (structure *)malloc(quantity * sizeof(structure))

typedef struct list List;
typedef struct node Node;
typedef struct element Element;

List *createList();
Node *createNode();
Element *createElement();
void push(List *list, long double value);
long double pop(List *list);
long int indexOf(List *list, long double value);
Node *atIndex(List *list, long int index);
long double erase(List *list, long double index);
long int size(List *list);
void sort(List *list, char *order);
void swap(Node *a, Node *b);
void print(List *list, char *order);
long double average(List *list);
long double deviation(List *list);
long double summation(List *list);
long double total(List *list);

#endif