#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("An int is size: %ld\n", sizeof(int));

    printf("An double is size: %ld\n", sizeof(double));

    printf("A character is size: %ld\n", sizeof(char));

    // this just tells you how many bytes to store the pointer, it doesnt work the same way as a len function
    char* name = "thisisalongname";
    printf("A string %s size: %ld\n", name, sizeof(name));
}