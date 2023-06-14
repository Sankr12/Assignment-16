//Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int i,j,k,sum,arr1[3][3],arr2[3][3],result[3][3];
    printf("Enter the value of first matrix for 3*3\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value for (%d , %d): ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter the value of second matrix for 3*3\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value for (%d , %d): ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nMatrix 1: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix 2: \n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum = 0;
            for(k=0;k<3;k++)
            {
                sum = sum + (arr1[i][k]*arr2[k][j]);
            }
            result[i][j] = sum;
        }
    }
    printf("\n\nMultiplication of matrices\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}

