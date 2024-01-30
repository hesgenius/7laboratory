#ifndef QUEUE_PROCESSING
#define QUEUE_PROCESSING

#include "list.h"

struct node *qpush(struct node *end, int data);

void queue_out(struct node *head);

void free_memory(struct node *lst);

int maximum(struct node *head);

void delete(struct node *head, int m);

#endif