//Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int findsmallest(int arr[], int);
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size],res,i;
    for(i=0;i<size;i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&arr[i]);
    }
    res = findsmallest(arr,size);
    printf("The smallest number is %d",res);
    printf("\n");
    return 0;
}
int findsmallest(int arr[], int size)
{
    int temp,i;
    temp = arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<temp)
           temp = arr[i];
    }
    return temp;
}

