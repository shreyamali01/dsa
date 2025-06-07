#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data1, Node *next1)
    {
        int data = data1;
        Node *next = next1;
    }

    Node(int data1)
    {
        int data = data1;
        Node *next = nullptr;
    }
};

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node x = Node(arr[0], nullptr);
    Node *y = &x;
    cout << y << endl;
}