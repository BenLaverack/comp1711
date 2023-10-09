#include <string.h>
#include <stdio.h>
main() {
    char inp[99];
    int leng, g;

    printf("Enter a string: ");
    scanf("%s", inp);

    leng = strlen(inp);

    for(g = leng - 1; g >= 0; g--) {
        printf("%c", inp[g]);
    }
    return 0;
}