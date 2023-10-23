#include <stdio.h>
#include <math.h>

float volSphere(float radius)
{
    return (4.0/3.0)*M_PI*radius*radius*radius;
}

int main()
{
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("The volume of the sphere is: %f\n", volSphere(radius));
}