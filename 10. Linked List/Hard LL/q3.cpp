// /* Node structure  used in the program

// struct Node{
//     int data;
//     struct Node * next;
//     struct Node * bottom;

//     Node(int x){
//         data = x;
//         next = NULL;
//         bottom = NULL;
//     }

// };
// */

// class Solution
// {
// public:
//     // Function which returns the  root of the flattened linked list.
//     Node *flatten(Node *root)
//     {
//         vector<int> mpp;
//         Node *temp1 = root;
//         while (temp1 != NULL)
//         {
//             mpp.push_back(temp1->data);
//             Node *temp1child = temp1->bottom;
//             while (temp1child != NULL)
//             {
//                 mpp.push_back(temp1child->data);
//                 temp1child = temp1child->bottom;
//             }
//             temp1 = temp1->next;
//         }
//         sort(mpp.begin(), mpp.end());
//         Node *temp = new Node(mpp[0]);
//         Node *head = temp;
//         for (int i = 1; i < mpp.size(); i++)
//         {
//             Node *ele = new Node(mpp[i]);
//             temp->bottom = ele;
//             temp = temp->bottom;
//         }
//         temp->bottom = nullptr;
//         return head;
//     }
// };