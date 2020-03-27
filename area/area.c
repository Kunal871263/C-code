#include<stdio.h>
#include<math.h>
int main()
{
    //Area of Triangle.
    double a,b,c,p,q,A;
    printf("Enter lengths of sides of triangle :");
    scanf("%lf %lf %lf",&a,&b,&c);
    p=(a+b+c)/2;
    q=p*(p-a)*(p-b)*(p-c);
    A = pow(q,0.5);
    printf("The area of triangle is %lf", A);

    //Area and Circumference of circle;
    double r ,A1,C;
    printf("\nEnter the radius of circle : ");
    scanf("%lf",&r);
    A1=(22*r*r)/7;
    C=(2*22*r)/7;
    printf("\nArea of Circle = %lf",A1);
    printf("\nCircumference of Circle =%lf",C);
    return 0;

}
