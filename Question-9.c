//Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int sorting(int arr[],int);
int main()
{
    int size;
    printf("Enter the size of array ");
    scanf("%d",&size);
    int arr[size],a,b,res;
    printf("Enter the elements ");
    for(a=0;a<size;a++)
    {
        scanf("%d",&arr[a]);
    }
    sorting(arr,size);
    printf("The sorted array is :\t");
    for(a=0;a<size;a++)
    {
        printf("%d\t",arr[a]);
    }
    return 0;
}
int sorting(int arr[],int size)
{
    int temp,n,a;
    for(a=0;a<size-1;a++)
    {
        for(n=0;n<size-1;n++)
        {
            if(arr[n]>arr[n+1])
            {
                temp = arr[n];
                arr[n] = arr[n+1];
                arr[n+1] = temp;
            }
        }
    }
    return 0;
}
