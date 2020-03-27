#include<stdio.h>

int matrix_addition(int m, int n);
int matrix_subtraction(int m, int n);
int matrix_multiplication(int m, int n);

int main()
{
    int m,n,x;

    printf("Enter the operation you want to enter \n1.Addition \n2.Subtraction \n3.Multiplication");
    scanf("%d",&x);

    switch(x)
    {
        case 1: matrix_addition(m,n);
                break;
        case 2: matrix_subtraction(m,n);
                break;
        case 3: matrix_multiplication(m,n);
                break;
        default:printf("Enter correct choice");
                break;
    }

    return 0;
}

int matrix_addition(int m, int n)
{
    scanf("%d %d",&m,&n);
    int i, j;
    int mat1[m][n], mat2[m][n], mat3[m][n];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d",&mat1[i][j]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d",&mat2[i][j]);
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d", mat3[i][j]);
        printf("\n");
    }

    return 0;

}
int matrix_subtraction(int m, int n)
{
    scanf("%d %d",&m,&n);
    int i, j;
    int mat1[m][n], mat2[m][n], mat3[m][n];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d",&mat1[i][j]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d",&mat2[i][j]);
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            mat3[i][j] = mat1[i][j] - mat2[i][j] ;
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", mat3[i][j]);
        printf("\n");
    }

    return 0;
}
int matrix_multiplication(int m, int n)
{
    int p, q, c, d, k, sum = 0;
    int mat1[10][10], mat2[10][10], mat3[10][10];

    printf("Enter number of rows and columns of mat1 matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of matrix 1\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &mat1[c][d]);

    printf("\nEnter number of rows and columns of mat2 matrix\n");
    scanf("%d%d", &p, &q);

    if (n != p)
        printf("\nThe matrices can’t be multiplied with each other.\n");
    else
    {
        printf("\nEnter elements of matrix2\n");

        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++)
                scanf("%d", &mat2[c][d]);

        for (c = 0; c < m; c++) {
            for (d = 0; d < q; d++) {
                for (k = 0; k < p; k++) {
                    sum = sum + mat1[c][k]*mat2[k][d];
                }

                mat3[c][d] = sum;
                sum = 0;
            }
        }

        printf("\nProduct of the matrices:\n");

        for (c = 0; c < m; c++) {
            for (d = 0; d < q; d++)
                printf("%d\t", mat3[c][d]);

            printf("\n");
        }
    }

    return 0;
}
