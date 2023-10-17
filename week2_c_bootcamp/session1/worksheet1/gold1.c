#include <stdio.h>
int main(){
    int choice;

    printf("The options are:\n1. Something1\n2. Something2\n3. Something3\n4. Something4\n5. Something4\nPlease enter a number: ");
    scanf("%d", &choice);

    switch(choice){

        case 1: printf("Something1\n");
        break;

        case 2: printf("Something2\n");
        break;

        case 3: printf("Something3\n");
        break;

        case 4: printf("Something4\n");
        break;

        case 5: printf("Something5\n");
        break;

        case else: printf("Error!");

    }

    return 0;
}