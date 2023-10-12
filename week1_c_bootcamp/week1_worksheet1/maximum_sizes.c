#include <limits.h>
#include <stdio.h>
#include <float.h>

int main () {
    printf("Maximum Integer size: %d\n", INT_MAX);
    printf("Maximum Float size: %d\n", FLT_MAX);
    printf("Maximum Double size: %d\n", DBL_MAX);
    printf("Maximum Character size: %d\n", CHAR_MAX);

    return 0;
}