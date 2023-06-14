//Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int i,j,arr1[3][3],arr2[3][3],result[3][3];
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
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\nSum of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
