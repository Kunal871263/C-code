#include <stdio.h>
#include<string.h>

int main() {
    char s1[100],s2[100];
    printf("Enter first string :");
    gets(s1);
    printf("\nEnter second string :");
    gets(s2);
    int i, j;

    i=strlen(s1);

    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }

    s1[i] = '\0';

    printf("After concatenation: ");
    puts(s1);

    return 0;
}
