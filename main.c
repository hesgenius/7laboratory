#include "list.h"
#include "list_processing.h"
#include "editFile.h"

int main(void) {
    //struct node *lst = queue();
    int in_size = 0;
    char filename[lmax];
    struct queue lst;
    lst.head = malloc(sizeof(struct node));
    lst.tail = malloc(sizeof(struct node));
    if (lst.head && lst.tail) {
        lst.head->next = NULL;
        lst.tail = lst.head; // next line -> filename input
        do {
            printf("Enter filename:");
            gets(filename);
        } while (strcmp(filename, "") == 0);
        in_size = input_file(filename, lst.tail);
        if (in_size > 0) {
            queue_out(lst.head);
            int lst_max = maximum(lst.head);
            delete (lst.head, lst_max);
            queue_out(lst.head);
        }
        else {
            printf("File is not found");
        }
    }
    free_memory(lst.head);
    return 0;
}