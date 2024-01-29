#ifndef list_processing
#define list_processing

#include <malloc.h>
#include "list.h"

struct node *push(struct node *end, int data);

void queue_out(struct node *head);

void free_memory(struct node *lst);

int maximum(struct node *head);

void delete(struct node *head, int m);

#endif