#include<stdio.h>
int main()
{
    int n=6;
    int a[]={4,2,6,1,3,9};
    int i,j,temp,min;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)   
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for (i =0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}