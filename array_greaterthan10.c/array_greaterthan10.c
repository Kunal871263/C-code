#include<stdio.h>

int main()
{
    int arr[5];

    //printf("Enter numbers :");
    for(int i=0; i<5; i++)
    {
        scanf("%d\n",&arr[i]);
    }

    printf("\nnumbers greater than 10 are:\n");
    for(int i=0; i<5; i++)
    {
        if(arr[i]>10)
            printf("%d\n",arr[i]);
       // else
         //   continue;
    }

    return 0;
}
