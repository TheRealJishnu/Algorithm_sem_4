#include <stdio.h>
#include <stdlib.h>


int count = 0;

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
        //count++;
        printf("%d\t", a+b); count++;
        Fibo(n-1, b, a+b); count++;
        //printf("%d\t", k); count++;
    }
}

int main()
{
    int n, a = 0, b = 1; //count++;
    printf("Enter Value of n : "); //count++;
    scanf("%d", &n); //count++;
    printf("%d\t%d\t", 0, 1); count++;
    Fibo(n, a, b);
    //printf("%d %d ", a, b); count++;
    // count++;                                // FOR INITIALISATION OF FOR LOOP
    // for(int i=0; i<n; i++, count++)
    // {
    //     count++;                           // FOR LOOP CONDITION CHECK COUNT++
    //     printf("%d\t", Fibo(i, a, b)); count++;
    // }

    printf("\n Counter : %d\n", count);
}