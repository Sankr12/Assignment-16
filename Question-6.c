//Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int i,a[10],b,temp,j;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<=9;i++)
    {
            printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
