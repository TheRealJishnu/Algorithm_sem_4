#include <bits/stdc++.h>

using namespace std;

vector<int> Count_Sort(vector<int> arr)
{
    int n = arr.size();
    vector <int> brr(n);
    int c_size = *max_element(arr.begin(), arr.end());
    vector <int> counter(c_size+1, 0);

    //Counter creation
    for(int i=0; i<n; i++)
    {
        counter[arr[i]]++;
    }

    //COUNTER UPDATE
    for(int i=1; i<=c_size; i++)
    {
        counter[i] = counter[i-1] + counter[i];
    }

    //CREATING SORTED brr
    for(int i=n-1; i>=0; i--)
    {
        brr[counter[arr[i]] - 1] = arr[i];
        counter[arr[i]]--;
    }

    return brr;

}

int main()
{
    vector<int> arr;
    cout<<"Enter Number of Elements : ";
    int num;
    cin>>num;
    cout << "Enter Elements : ";
    while(num--)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << endl << "UNSorted Array : ";
    for(auto p : arr)
    {
        cout << p << ' ';
    }

    //Function Call
    arr = Count_Sort(arr);

    cout << endl << "Sorted Array : ";
    for(auto p : arr)
    {
        cout << p << ' ';
    }
    return 0;
}
