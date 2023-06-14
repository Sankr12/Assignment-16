//Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,maximum;
    for(i=0;i<=9;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
    }
    maximum = a[0];
    for(i=0;i<9;i++)
    {
        if(a[i] > maximum)
            maximum = a[i];
    }
    printf("The Greatest Value = %d",maximum);
    printf("\n");
    return 0;
}
