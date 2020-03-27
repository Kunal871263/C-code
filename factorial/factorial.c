#include<stdio.h>
#include<math.h>
int main()
{
    int a,fact=1;
    printf("Enter a positive integer: ");
    scanf("%d",&a);
    while(a>0)
    {
        fact=a*fact;
        a=a-1;

    }
    printf("The factorial of the number is= %d",fact);
    return 0;
}
