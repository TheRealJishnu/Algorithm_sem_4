#include <stdio.h>
#include <stdlib.h>

void Merge(int arr[], int mid, int low, int high)
{
    int size1 = mid - low + 1;
    int size2 = high - mid;
    int *temp1 = (int*)malloc(size1 * sizeof(int));
    int *temp2 = (int*)malloc(size2 * sizeof(int));

    //Array Copy
    int j=0;
    for(int i = low; i<=mid; i++)
    {
        temp1[j++] = arr[i];
    }

    j=0;
    for(int i = mid + 1; i <= high; i++)
    {
        temp2[j++] = arr[i];
    }

    //Compare and sort
    int a=0, b=0, z=low;
    while(a != size1 && b != size2)
    {
        if(temp1[a] > temp2[b])
        {
            arr[z] = temp2[b++];
        }
        else
        {
            arr[z] = temp1[a++];
        }
        z++;
    }
    while(a != size1)
    {
        arr[z++] = temp1[a++];
    }
    while(b != size2)
    {
        arr[z++] = temp2[b++];
    }

}

void MergeSort(int arr[], int l, int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid+1, h);
        Merge(arr, mid, l, h);
    }
}

int main()
{
    int size;
    printf("Enter Size : ");
    scanf("%d", &size);
    int* arr = (int*)malloc(size * sizeof(int));
    printf("Enter %d Integers To Sort : ", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", (arr + i));
    }

    int low = 0;
    int high = size-1;

    MergeSort(arr, low, high);

    printf("\nSorted Array : \n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);

    }
    printf("\n");

    return 0;
}
