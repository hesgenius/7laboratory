#include "list.h"
#include "queue_processing.h"
#include "stack_processing.h"
#include "editFile.h"

int main(void) {
    //struct node *lst = queue();
    int in_size = 0, stack_size = 0;
    float f1 = 0, f2 = 0;
    int a = 0, b = 0;
    char filename_in[lmax];
    char filename_out1[lmax];
    char filename_out2[lmax];
    struct queue lst;
    struct stack nlst;
    lst.head = malloc(sizeof(struct node));
    lst.tail = malloc(sizeof(struct node));
    if (lst.head && lst.tail) {
        lst.head->next = NULL;
        lst.tail = lst.head; // next line -> filename input
        do {
            printf("Enter input filename:");
            gets(filename_in);
        } while (strcmp(filename_in, "") == 0);
        in_size = Qinput_file(filename_in, lst.tail);
        if (in_size > 0) {
            queue_out(lst.head);
            int lst_max = maximum(lst.head);
            delete (lst.head, lst_max);
            queue_out(lst.head);
            do {
                printf("Enter output filename (task 2):");
                gets(filename_out1);
            } while (strcmp(filename_out1, "") == 0);
            Qoutput_file(filename_out1, lst.head);
            nlst.top = malloc(sizeof(struct node));
            if (nlst.top) {
                nlst.top->next = NULL;
                do {
                    printf("Enter integers A and B (A < B):");
                    scanf("%f%f", &f1, &f2);
                    a = (int)f1;
                    b = (int)f2;
                } while (f1 != (int)f1 || f2 != (int)f2 || f1 >= f2);
                stack_size = Sinput_file(filename_out1, &nlst.top, a, b);
                if (stack_size > 0) {
                    stack_out(nlst.top);
                    do {
                        printf("Enter output filename (task 3):");
                        gets(filename_out2);
                    } while(strcmp(filename_out2, "") == 0);
                    Soutput_file(filename_out2, nlst.top);
                }
                else {
                    printf("File is not found or stack empty\n");
                }
            }
        }
        else {
            printf("File is not found or empty");
        }
    }
    free_memory(nlst.top);
    free_memory(lst.head);
    return 0;
}