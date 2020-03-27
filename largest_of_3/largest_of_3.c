#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    if(a >= b && a >= c)
        printf("a : %.2f is the largest number",a);
    else if(b >= a && b >= c)
        printf("b : %.2f is the largest number",b);
    else
        printf("c : %.2f is the largest number",c);

    return 0;
}
