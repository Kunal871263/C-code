#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of your array: ");
    scanf("%d",&n);
    int str[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter elements of array : ");
        scanf("%d",&str[i]);

    }
    int l=0,m=0;
    int even[l],odd[m];
    for (int j = 0; j < n; j++ )
    {
        if(str[j]%2==0)
        {
            even[l]=str[j];
            l++;
        }
        else
        {
            odd[m]=str[j];
            m++;
        }

    }
    printf("Number of even numbers : %d",l);
    for(int k=0;k<l;k++)
    {
        printf("\nThe element[%d] of even array : %d\n",k,even[k]);
    }

     printf("\nNumber of odd numbers : %d",m);
    for(int k=0;k<m;k++)
    {
        printf("\nThe element[%d] of even array : %d\n",k,odd[k]);
    }

    return 0;
}
