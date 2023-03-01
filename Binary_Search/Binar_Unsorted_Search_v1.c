#include <stdio.h>
#include <stdlib.h>

int Binary_Search(int* arr, int low, int high, int key)
{
    int mid = (low + high)/2;
    if(low <= high)
    {
        if(key == arr[mid])
        {
            return mid+1;
        }
        else if(key < arr[mid])
        {
            Binary_Search(arr, low, mid-1,key);
        }
        else
        {
            Binary_Search(arr, mid+1, high, key);
        }
    }
    else
    {
        return 0;
    }
}

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int* arr, int l, int h)
{
    int pivot = arr[h];
    int i = l-1;
    for (int j = l; j < h; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            Swap(&arr[i], &arr[j]);
        }
    }
    i++;
    Swap(&arr[i], &arr[h]);
    return i;
    
}

void Quick_Sort(int* arr, int l, int h)
{
    if(l < h)
    {
        int k = Partition(arr, l, h);
        Quick_Sort(arr, l, k-1);
        Quick_Sort(arr, k+1, h);
    }
}

int main()
{
    int size;
    printf("Enter Size : ");
    scanf("%d", &size);
    int *arr = (int*)malloc(size * sizeof(int));
    printf("Enter Array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    Quick_Sort(arr, 0, size-1);

    while(1)
    {
        char ch;
        printf("Do You Want to Start / Continue Searching? (y/n) : ");
        scanf("%c", &ch);
        //getchar();
        scanf("%c", &ch);
        if(ch != 'y' && ch != 'Y') break;
        else
        {
            printf("Enter Value to Search: ");
            int key;
            scanf("%d", &key);
            int pos = Binary_Search(arr, 0, size-1, key);

            if (pos)
            {
                printf("Searched Element Found in Position %d\n", pos);
            }
            else
            {
                printf("Searched Element Not Found in the Array\n");
            }
        }

    }

    // printf("Enter Value to Search: ");
    // int key;
    // scanf("%d", &key);
    // int pos = Binary_Search(arr, 0, size-1, key);

    // if (pos)
    // {
    //     printf("Searched Element Found in Position %d\n", pos);
    // }
    // else
    // {
    //     printf("Searched Element Not Found in the Array\n");
    // }
    

    
}
