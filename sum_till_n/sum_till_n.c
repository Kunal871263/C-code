#include<stdio.h>

int main()
{
    int n,sum;
    sum = 0;
    printf("Enter the number till which sum is required: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum till %d is %d ",n,sum);

    return 0;
}
