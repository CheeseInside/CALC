#include "sum.h"
#include "get_number.h"
#include <stdlib.h>
#include <string.h>



int sum(char *str) {
    int result = 0;
    get_number(str, &result);
    int summm = result;



    if (*str == '\0') {
        return summm;
    }

    while (str) {
        if (*str == '+') {
            str = get_number(str, &result);
            summm += result;
            str++;
        }
    }

    return summm;
}
