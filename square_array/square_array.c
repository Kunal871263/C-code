#include<stdio.h>
int square_array(int array[],int n)
{
    int array_sq[n];
    for(int j=0;j<n;j++)
    {
        array_sq[j]=(array[j]*array[j]);
        printf("\nElement[%d] of square array is : %d",j,array_sq[j]);

    }
    return 0;

}
int main()

{
    int n;
    printf("How many elements do you want to enter? :");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("\nEnter element[%d] :",i);
        scanf("%d",&arr[i]);
    }
    square_array(arr,n);
    return 0;

}
