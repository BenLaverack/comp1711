#include <stdio.h>

float circleArea(float radius){
    float area = 3.141*(radius*radius);
    return area;
}

int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is %f\n", circleArea(radius));
}