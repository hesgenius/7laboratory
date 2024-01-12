#include "list_processing.h"

struct node *push(struct node *end, int data) {
    struct node *buff = malloc(sizeof(struct node));
    if (buff) {
        buff->info = data;
        buff->next = NULL;
        end->next = buff;
        return buff;
    }
    return end;
}

void queue_out(struct node *head) {
    if (head->next == NULL) {
        puts("EMPTY");
    }
    else {
        head = head->next;
        while (head) {
            printf("%d ", head->info);
            head = head->next;
        }
        printf("\n");
    }
}

void free_memory(struct node *lst) {
    struct node *now = lst, *next = lst;
    while (next) {
        next = now->next;
        free(now);
        now = next;
    }
    puts("MEMORY CLEAN");
}