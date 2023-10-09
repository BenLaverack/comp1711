#include <stdio.h>
int main() {
    float area;
    float length;
    float width;

    printf("Enter the length of the rectangle (cm): ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle (cm): ");
    scanf("%f", &width);

    area = length*width;

    printf("The area of the rectangle is %f cm^2\n", area);

    return 0;
}