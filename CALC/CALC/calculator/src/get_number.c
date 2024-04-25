#include "get_number.h"
#include <stdlib.h>
#include <ctype.h>

const char* get_number(const char *str, int *result) {
    char temp[10];
    char *temp_ptr = temp;

    while (*str == ' ') {
        str++;
    }

    while (isdigit(*str)) {
        *(temp_ptr++) = *(str++);
    }

    *temp_ptr = '\0';

    *result = atoi(temp);


    return str;
}
