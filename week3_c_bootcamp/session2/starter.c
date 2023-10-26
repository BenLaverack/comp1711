#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename [] = "input.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL){
        perror("");
        return 1;
    }

    int arr[200] = {};
    int buffer_size = 5;
    int i = 0;
    char line_buffer[buffer_size];
    while(fgets(line_buffer, buffer_size, file) != NULL){
        arr[i] = ("%d", atoi(line_buffer));
        i++;
    }
    printf(arr);
}