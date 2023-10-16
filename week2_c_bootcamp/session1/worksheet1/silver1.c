#include <stdio.h>

int main(){
    int mark;

    printf("Enter a mark: ");
    scanf("%d", &mark);

    if (mark >=50 && mark < 69){
        printf("Pass!\n");
    }
    else if (mark >= 70){
        printf("Distinction!\n");
    }
    else{
        printf("Fail!\n");
    }

    return 0;
}