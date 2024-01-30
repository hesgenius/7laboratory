#include "queue_processing.h"

struct node *qpush(struct node *end, int data) {
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
        printf("EMPTY\n");
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

int maximum(struct node *head) {
    int m = 0;
    if (head->next == NULL) {
        printf("EMPTY\n");
    }
    else {
        head = head->next;
        m = head->info;
        while (head) {
            if (head->info > m) {
                m = head->info;
            }
            head = head->next;
        }
    }
    return m;
}

void delete(struct node *head, int m) {
    struct node *buff = malloc(sizeof(struct node));
    if (head->next == NULL) {
        printf("EMPTY\n");
    }
    else {
        while (head && head->next != NULL) {
            if ((head->next)->info == m) {
                buff->next = (head->next)->next;
                free(head->next);
                head->next = buff->next;
            }
            head = head->next;
        }
    }
    free(buff);
}