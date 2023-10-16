#include <stdio.h>

int main(){
    int temp;

    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if (temp >= -10 && temp <= 40){
        printf("It is within the range\n");
    }
    else {
        printf("It is outside the range\n");
    }
    return 0;
}