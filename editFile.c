#include "editFile.h"

void input_file(char filename[]) {
    FILE *file_out;
    char str[lmax];
    int num;
    printf("Введите числа для записи в файл:\n");
    file_out = fopen(filename, "w");
    while (gets(str) != NULL && strcmp(str, "") != 0) {
        num = atoi(str);
        while (num || !num && str[0] == '0') {
            fputs(str, file_out);
            fputc('\n', file_out);
        }
    }
    fclose(file_out);
}

void output_file(char filename[]) {
    FILE *file_out;
    char str[lmax];
}