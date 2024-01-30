#include "editFile.h"

int Qinput_file(char filename[], struct node *end) {
    int size = 0;
    FILE *file_in;
    char str[lmax];
    int num;
    file_in = fopen(filename, "r");
    if (file_in != NULL) {
        char str[lmax];
        while (fgets(str, lmax, file_in) != NULL) {
            int num = atoi(str);
            end = qpush(end, num);
            size++;
        }
        fclose(file_in);
        return size;
    }
    return -1;
}

void Qoutput_file(char filename[], struct node *head) {
    FILE *file_out;
    file_out = fopen(filename, "w+");
    if (head->next == NULL) {
        printf("EMPTY\n");
    }
    else {
        head = head->next;
        while (head) {
            fprintf(file_out, "%d\n", head->info);
            head = head->next;
        }
    }
    fclose(file_out);
}

int Sinput_file(char filename[], struct node **top, int a, int b) {
    int size = 0;
    FILE *file_in;
    char str[lmax];
    int num;
    file_in = fopen(filename, "r");
    if (file_in != NULL) {
        char str[lmax];
        while (fgets(str, lmax, file_in) != NULL) {
            int num = atoi(str);
            if (num > a && num < b) {
                *top = spush(*top, num);
                size++;
            }
        }
        fclose(file_in);
        return size;
    }
    return -1;
}

void Soutput_file(char filename[], struct node *top) {
    FILE *file_out;
    file_out = fopen(filename, "w+");
    if (top->next == NULL) {
        printf("EMPTY\n");
    }
    else {
        top = top->next;
        while (top) {
            fprintf(file_out, "%d\n", top->info);
            top = top->next;
        }
    }
    fclose(file_out);
}