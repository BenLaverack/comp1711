#include <stdio.h>
int main() {
    // maximum name length is 15
    char name[15];

    printf("Hello, please enter your name: ");
    scanf("%s", name);
    printf("your name is %s\n", name);

    return 0;
}