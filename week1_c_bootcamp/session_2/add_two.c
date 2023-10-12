#include <stdio.h>
int main(){

    float a, b, c;

    printf("enter a Number: ");
    scanf("%f", &a);
    printf("Enter another number: ");
    scanf("%f", &b);

    c = a + b;

    printf("The result is %f\n", c);

    return 0;
}