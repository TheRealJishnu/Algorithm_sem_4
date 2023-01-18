#include <stdio.h>
#include <stdlib.h>

int *arr;
int fibo(int n)
{
    if(n == 1 || n == 0)
        return n;
    else
    {
        if(arr[n] == 0)
        {
            arr[n] = fibo(n-1) + fibo(n-2);
            printf("%d\t", arr[n]);
            return arr[n];
        }
        else
        {
            return arr[n];
        }
    }
}

int main()
{
    printf("Enter n : ");
    int n;
    scanf("%d", &n);
    arr = (int*)calloc(n+1, sizeof(int));

    printf("%d\t%d\t", 0, 1);
    fibo(n - 1);
    printf("\n");
}