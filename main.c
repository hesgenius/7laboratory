#include "list.h"
#include "list_processing.h"
#include "editFile.h"

int main(void) {
    //struct node *lst = queue();
    struct queue lst;
    lst.head = malloc(sizeof(struct node));
    lst.tail = malloc(sizeof(struct node));
    if (lst.head && lst.tail) {
        lst.head->next = NULL;
        lst.tail = lst.head; // next line -> filename input
    }
    return 0;
}