/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int i,sumodd=0,sumeven=0,a[10];
    for(i=0;i<=9;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            sumeven = sumeven+a[i];
        else
            sumodd = sumodd+a[i];
    }
    printf("Sum of even numbers = %d\n",sumeven);
    printf("Sum of odd numbers = %d",sumodd);
    printf("\n");
    return 0;
}
