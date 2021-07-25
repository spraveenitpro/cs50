#include <stdio.h>
#include <cs50.h>

void printArray(int a[], int size);
void mergeSort(int a[], int p, int r);
void merge(int a[], int p, int q, int r);

int main(void)
{
    int arr[] = {32, 45, 67, 2, 7};
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Given Array: \n");
    printArray(arr,len);

    mergeSort(arr, 0, len - 1);
    printf("\nSorted array: \n");
    printArray(arr, len);
    return 0;
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
}


void merge(int arr[],int l, int m, int h)
{

    int i,j,k;

    int n1 = m  + 1;
    int n2 = h - m;
    /* create temp arrays */
    int left[n1]; int right[n2];
    /* Copy data to temp arrays L[] and R[] */
    for ( i = 0; i< n1; i++)
    {
        left[i] = arr[l + i];
    }

    for ( j = 0; j < n2; j++)
    {
        right[j] = arr[m + j + 1];
    }

    /* Merge the temp arrays back into arr[l..r]*/

    i = 0;
    j = 0;
    k = l;

    while ( i < n1 && j < n2)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

     /* Copy the remaining elements of L[], if there are any */

    while ( i < n1 )
    {
        arr[k] = left[i];
        i++;
        k++;
    }

      /* Copy the remaining elements of R[], if there are any */

    while( j < n2 )
    {
        arr[k] = right[j];
        j++;
        k++;
    }

}


void mergeSort(int arr[], int l, int h)
{

if ( l < h)
{
    int m = (l + h)/2;
    //int m = l + (h - l) / 2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1, h);
    merge(arr,l,m,h);
}

}

