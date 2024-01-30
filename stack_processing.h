#ifndef STACK_PROCESSING
#define STACK_PROCESSING

#include "list.h"

struct node *spush(struct node *top, int data);

void stack_out(struct node *top);

#endif