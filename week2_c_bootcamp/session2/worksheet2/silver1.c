#include <stdio.h>

int strlen(char str)
{
    char letter [1];
    int a;
    int i = 0;
    while (letter[i] != "0")
    {
        a = a + 1;
        i++;
    }
    return a;
}


int main()
{
    char str [100];
    printf("Please enter a string: ");
    scanf("%s", str);
    printf("The length of the string is: %d", strlen(str));
}