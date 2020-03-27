#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,add,sub,mul,div;
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter another number: ");
    scanf("%f", &b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("Addition = %f\n", add);
    printf("Subtraction = %f\n", sub);
    printf("Multiplication = %f\n", mul);
    printf("Division = %f\n", div);
    return 0;

}
