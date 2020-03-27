#include<stdio.h>
#include<math.h>
int main()
{
    float A,P,r,t;
    printf("Enter Initial Amount :");
    scanf("%f",&P);
    printf("\nEnter Rate of Interest :");
    scanf("%f",&r);
    printf("\nEnter Duration(in years) :");
    scanf("%f",&t);
    A=P*(1+r*t);
    printf("\nFinal Amount: %f\n",A);
    return 0;
}
