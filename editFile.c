#include "editFile.h"

int input_file(char filename[], struct node *end) {
    int size = 0;
    FILE *file;
    char str[lmax];
    int num;
    file = fopen(filename, "r");
    if (file != NULL) {
        char str[lmax];
        while (fgets(str, lmax, file) != NULL) {
            int num = atoi(str);
            end = push(end, num);
            size++;
        }
        fclose(file);
        return size;
    }
    return -1;
}

void output_file(char filename[]) {
    FILE *file_out;
    char str[lmax];
}