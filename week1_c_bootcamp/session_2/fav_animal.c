#include <stdio.h>
int main(){
    printf("Enter your favorite animal: ");
    char animal[100];
    scanf("%s", animal);
    printf("%s\n", animal);
    return 0;
}