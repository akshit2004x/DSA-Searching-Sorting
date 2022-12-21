#include<stdio.h>
int main()
{
    int arr[100],n,i,b,c=0;
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
    for(i=0;i<n;i++)
    {
        if(arr[i]==b)
        {
            c++;
            break;
        }
        else
        {
            c=0;
        }
    }
    if(c==1)
        printf("element is present in array");
    else
        {
            printf("element is not present in array");
        }   
    return 0;
}