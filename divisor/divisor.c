#include<stdio.h>

int main()
{
    int n,divisor;

    printf("Enter number whose divisor is to be found : ");
    scanf("%d",&n);

    printf("Divisors are: ");
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            printf("%d ", i);

    }

    return 0;
}
