#include "stack_processing.h"

struct node *spush(struct node *top, int data) {
    struct node *buff = malloc(sizeof(struct node));
    if (buff) {
        top->info = data;
        buff->next = top;
        return buff;
    }
    return top;
}

void stack_out(struct node *top) {
    if (top->next == NULL) {
        printf("EMPTY\n");
    }
    else {
        top = top->next;
        while (top) {
            printf("%d ", top->info);
            top = top->next;
        }
        printf("\n");
    }
}