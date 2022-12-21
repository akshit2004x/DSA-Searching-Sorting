#include <stdio.h>//list should be sorted before doing binary search so enter sorted list
int main()
{
    int n,a[30],i,top=n-1,bot=0,mid=0;
    printf("Enter length array");
    scanf("%d ",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int x;
    printf("enter element to search");
    scanf("%d ",&x);
    while(bot<=top)
    {
        mid=(top+bot)/2;
        if(x=a[mid])
        {
            printf("element is found");
            break;
        }
        else if(x<a[mid])
        {
            bot=mid-1;
        }
        else if(x>a[mid])
        {
            top=mid+1;
        }
    }
}
