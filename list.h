#ifndef LIST
#define LIST

#include <stdio.h>
#include <malloc.h>

struct node {
    int info;
    struct node *next;
};

struct queue {
    struct node *head;
    struct node *tail;
};

struct stack {
    struct node *top;
};

#endif