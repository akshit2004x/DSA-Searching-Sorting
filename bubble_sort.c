#include<stdio.h>
int main()
{
    int n=6;
    int a[]={4,2,6,1,3,9};
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }        
        }
    }
    for (i =0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}