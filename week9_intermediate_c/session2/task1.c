#include <stdlib.h>
#include <stdio.h>

int size;

int main()
{
    char* address = malloc(200*sizeof(char));

    int* data = malloc(70*sizeof(int));

    printf("Enter the size of an array: ");
    scanf("%d", &size);
    double* samples = malloc(size*sizeof(double));
}