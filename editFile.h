#ifndef editFile
#define editFile
#define lmax 200

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "list.h"
#include "list_processing.h"

int input_file(char filename[], struct node *end);

void output_file(char filename[]);

#endif