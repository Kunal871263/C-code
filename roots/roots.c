#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,p,q;
    printf("ax^2+bx+c=0");
    printf("\nEnter a :");
    scanf("%lf",&a);
    printf("\nEnter b :");
    scanf("%lf",&b);
    printf("\nEnter c :");
    scanf("%lf",&c);
    p=( -b + sqrt(b*b-4*a*c)) /(2*a);
    q=( -b - sqrt(b*b-4*a*c))/(2*a);
    if((b*b)<(4*a*c))
    {
        printf("\nRoots are not real");
    }
    else{
        printf("\nFirst root = %lf",p);
        printf("\nSecond root= %lf",q);
    }
    return 0;
}
