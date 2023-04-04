#include <bits/stdc++.h>

using namespace std;

int* PiCreate(string str, int *pi)
{
    int len = str.length();
    int i = 0;
    pi[0] = -1;
    for (int j = 1; j < len; j++)
    {
        if(str[i] == str[j])
        {
            pi[j] = i;
            i = i+1;
            //cout << "(" << i << ", " << j << " ) ";
        }
        else
        {
            if(i == 0) pi[j] = -1;
            else
            {
                i = 0;
                j--;
            }
        }
    }
    return pi;
}

void PrintArr(int* arr, int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    string str = "ababaac";
    int len = str.length();
    int* pi = (int*)malloc(sizeof(int) * len);
    pi = PiCreate(str, pi);
    PrintArr(pi, str.length());

}
