//Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,minimum;
    for(i=0;i<=9;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    minimum = a[0];
    for(i=0;i<9;i++)
    {
        if(a[i] < minimum)
            minimum = a[i];
    }
    printf("The Smallest Value = %d",minimum);
    printf("\n");
    return 0;
}

