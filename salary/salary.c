#include<stdio.h>

int main()
{
    float basic,DA,HRA,pay;
    printf("Enter Basic Pay : ");
    scanf("%f", &basic);
    printf("\nEnter DA Percentage : ");
    scanf("%f", &DA);
    printf("\nEnter HRA Percentage : ");
    scanf("%f", &HRA);

    pay = basic + (DA*basic)/100 + (HRA*basic)/100  ;

    printf("Total Pay : %.2f",pay);

    return 0;
}
