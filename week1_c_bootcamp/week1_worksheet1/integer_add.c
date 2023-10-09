#include <stdio.h>
main() {
    int a, b, c;

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter an integer: ");
    scanf("%d", &b);

    c = a + b;

    printf("The answer is %d\n", c);

    return 0;
}