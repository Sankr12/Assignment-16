//Write a program in C to find the transpose of a matrix.
#include<stdio.h>
#define N 50
int main()
{
    int arr[N][N],i,j,a,b;
    printf("Enter the Rows of matrix: ");
    scanf("%d",&a);
    printf("Enter the columns of Matrix: ");
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nYour Matrix is: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Transpose of Your Matrix: \n");
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
}

