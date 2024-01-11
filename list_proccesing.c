#include "list.h"
#include "list_proccesing.h"

struct node *push(struct node *end, int data) {
    struct node *buff = malloc(sizeof(struct node));
    if (buff) {
        buff->info = data;
        end->next = buff;
        return buff;
    }
    return end;
}

struct node *delete();

void free_memory();