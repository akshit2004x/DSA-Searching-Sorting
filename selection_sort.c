#include<stdio.h>
int main()
{
    int n=6;
    int a[]={7,11,9,2,17,4};
    int i,j,temp,min;
    for(i=0;i<=n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for (i =0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}