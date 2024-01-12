#ifndef LIST
#define LIST

#include <stdio.h>

struct node {
    int info;
    struct node *next;
};

struct queue {
    struct node *head;
    struct node *tail;
};

#endif