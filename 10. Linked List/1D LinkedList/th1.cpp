#include <iostream>
#include <vector>
using namespace std;

// create a linkedlist
class Node
{
public:
    int data;
    Node *next;

    // constructor
public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    // constructor
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {2, 4, 5, 6};
    Node *y = new Node(arr[0]);
    cout << y << '\n';
    cout << y->data << '\n';
}