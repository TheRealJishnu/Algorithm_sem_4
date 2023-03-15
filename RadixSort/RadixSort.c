#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Pow(int base, int expo)
{
    if(expo == 0) return 1;
    int res = 1;
    for (int i = 0; i < expo; i++)
    {
        res *= base;
    }
    return res;
    
}


int Max(int* arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    return max;
}

int Digits(int n)
{
    int count=0;
    if(n==0) return 1;
    while (n != 0) 
    {
        n /= 10;
        ++count;
    }
    return count;
}

int digitAt(int num, int pos)
{
    num = num/Pow(10, pos-1);
    return num % 10;
}

int* Radix_Sort(int* arr, int size)
{
    
    int* brr;
    
    int a;
    int lim = Digits(Max(arr, size));
    for (int k = 1; k <= lim; k++)      //LIM IS DIGIT OF MAX NUMBER
    {
        brr = (int*)malloc(size * sizeof(int));
        a = -1;
        for (int j = 0; j < 10; j++)      //A PARTICULAR DIGIT
        {
            for (int i = 0; i < size; i++)      //ITERATE THE WHOLE ARRAY FOR PARTICULAR DIGIT
            {
                if(digitAt(arr[i], k) == j) brr[++a] = arr[i];      
            }
        }
        free(arr);
        arr = brr;
        
    }
    
    return arr;
    
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

    //int low = 0;
    //int high = size-1;

    arr = Radix_Sort(arr, size);

    printf("\nSorted Array : \n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);

    }
    printf("\n");

    return 0;
}
