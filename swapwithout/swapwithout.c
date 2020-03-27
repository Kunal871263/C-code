#include<stdio.h>
 int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap first number=%d \nsecond number=%d",a,b);
    return 0;
}
