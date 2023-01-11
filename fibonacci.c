#include <stdio.h>
#include <stdlib.h>

int *arr;
int fibo(int n)
{
    if(n == 1 || n == 0)
        return n;
    else
    {
        int a, b;
        if(arr[n-1] == 0)
            a = fibo(n-1);
        else
            a = arr[n-1];
        
        if(arr[n-2] == 0)
            b = fibo(n-2);
        else
            b = arr[n-2];
        return a + b;
    }
}

int main()
{
    printf("Enter n : ");
    int n;
    scanf("%d", &n);
    arr = (int*)calloc(n, sizeof(int));

    for(int i=0; i<n; i++)
    {
        arr[i] = fibo(i);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
