#include <stdio.h>

int main(){

    int value = 0;

    while(value != -1){
        printf("Please enter a number: ");
        scanf("%d", &value);

        if (value >= 0 && value <= 100){
            printf("It is within the range\n");
        }
        else {
            printf("Not in the range\n");
        }
    printf("The program is terminated\n");
    }

    return 0;

}