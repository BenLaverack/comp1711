#include <stdio.h>

main() {
    float pi, res, radius;

    printf("Enter the radius of the circle: ");
    scanf(("f%", &radius));

    res = pi*(radius*radius);

    printf("The area of the circle is %f\n", res);

    return 0;
}