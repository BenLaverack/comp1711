#include <stdio.h>
int main(){
    int a = 17;
    int guess;

    while (guess != a){
        printf("Guess a number: ");
        scanf("%d", &guess);
    }
    printf("Well done!\n");
    
}