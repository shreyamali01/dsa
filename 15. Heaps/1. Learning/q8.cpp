#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution
{
public:
    int countNodes(Node *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    bool isCBT(Node *root, int index, int total_nodes)
    {

        if (!root)
        {
            return 1;
        }

        if (index >= total_nodes)
        {
            return 0;
        }

        return isCBT(root->left, 2 * index + 1, total_nodes) && isCBT(root->right, 2 * index + 2, total_nodes);
    }

    bool maxHeap(Node *root)
    {

        if (root->left)
        {

            if (root->data < root->left->data)
            {
                return 0;
            }

            if (!maxHeap(root->left))
            {
                return 0;
            }
        }

        if (root->right)
        {

            if (root->data < root->right->data)
            {
                return 0;
            }

            return maxHeap(root->right);
        }

        return 1;
    }

    bool isHeap(Node *tree)
    {
        int total_nodes = countNodes(tree);
        bool ans1 = isCBT(tree, 0, total_nodes);
        bool ans2 = maxHeap(tree);
        return (ans1 && ans2);
    }
};