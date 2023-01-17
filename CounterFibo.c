#include <stdio.h>
#include <stdlib.h>


int count = 1;

int Fibo(int n, int a, int b)
{
    if(n == 0){
        count += 2;
        return a;
    }
    else if(n == 1){
        count +=2;
        return b;
    }
    else{
        count++;
        return Fibo(n-1, b, a+b);
    }
}

int main()
{
    int n, a = 0, b = 1; count++;
    printf("Enter Value of n : "); count++;
    scanf("%d", &n); count++;
    //printf("%d %d ", a, b); count++;
    count++;                                // FOR INITIALISATION OF FOR LOOP
    for(int i=0; i<n; i++, count++)
    {
        count++;                           // FOR LOOP CONDITION CHECK COUNT++
        printf("%d\t", Fibo(i, a, b)); count++;
    }

    printf("\n Counter : %d\n", count);
}