#include<stdio.h>          //list should be sorted before doing binary search so enter sorted list
int binarySearch(int arr[],int l,int r,int b)
{
    int mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(b==arr[mid])
            return mid;
        else if(b<arr[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int main()
{
    int arr[100],n,i,b,c=0,mid;
    printf("enter length o fan array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter %d element of array",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("enter element you want to searched");
    scanf("%d",&b);
    int result = binarySearch(arr, 0, n - 1, b);
    (result == -1)?printf("Element is not present in array"): printf("Element is present at index %d",result);
}