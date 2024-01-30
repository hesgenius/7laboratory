#ifndef editFile
#define editFile
#define lmax 200

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "list.h"
#include "queue_processing.h"
#include "stack_processing.h"

int Qinput_file(char filename[], struct node *end);

void Qoutput_file(char filename[], struct node *head);

int Sinput_file(char filename[], struct node **top, int a, int b);

void Soutput_file(char filename[], struct node *top);

#endif