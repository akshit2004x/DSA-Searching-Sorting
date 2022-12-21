#include<stdio.h>
int partition(int A[], int low, int high)
{
    int key,i,j,temp;
    key = A[low];
    i = low + 1;
    j = high;
    do
    {
        while(A[i]<=key)
        {
            i++;
        }
        while(A[j]>key)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}
int main()
{
    int n=6,A[]={4,2,6,1,3,9};
    quickSort(A, 0, n - 1);
    for (int i =0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}