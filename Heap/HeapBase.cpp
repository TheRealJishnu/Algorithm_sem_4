#include <bits/stdc++.h>
using namespace std;

typedef struct BinaryTree
{
    int data;
    struct BinaryTree* left;
    struct BinaryTree* right;
}Node;

Node* root = NULL;
//int *arr;

void InsertNode(Node* current, int data)
{
    if(current == NULL)
    {
    current = (Node*)malloc(sizeof(Node));
    current->data = data;
    }
    else
    {

    }
}

void InsertArr(vector<int>& arr)
{
    int temp;
    cin >> temp;
    arr.push_back(temp);
    if(arr.size() == 1)
    {
        return;
    }
    else
    {
        int n = arr.size();
        
    }
}

int main()
{
    vector<int> arr;
    char ch;
    do
    {
        cout << "Enter 1 to Insert Into Heap" << endl;
        int choice;
        cin >> choice;
        //int end = -1;
        switch(ch)
        {
            case 1 : InsertArr(arr);
        }
        cout << "Do You Want to Continue? (y/n) ";
        cin >> ch >> ch; 
    } while (ch == 'y' || ch == 'Y');
    


}
