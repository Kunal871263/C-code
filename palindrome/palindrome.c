#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];
    printf("Enter a string :");
    gets(str);
    printf("\n%s", str);
    int rev = strlen(str) - 1;
    printf("\n%d",strlen(str));

    for(int i=0; i<strlen(str); i++,rev--)
    {
        if( str[i]==str[rev])
         {
            continue;
         }
        else
        {
            printf("\nString is not a palindrome.");
            exit(0);
        }
    }

    printf("\nString is a palindrome!!");

    return 0;
}
