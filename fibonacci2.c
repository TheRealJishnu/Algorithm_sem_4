#include <stdio.h>
int fibo(int n, int a, int b) 
{
    if(n == 0)
        return a;
    else if(n == 1)
        return b;
    else
        return fibo(n-1, b, a+b);
}
