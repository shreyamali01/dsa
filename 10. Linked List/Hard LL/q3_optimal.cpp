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

// class Solution {
//   public:
//     // Function which returns the  root of the flattened linked list.
//     Node* merged(Node* list1, Node* list2){
//         Node* dummy = new Node(-1);
//         Node* temp = dummy;
//         while(list1!=NULL && list2!=NULL){
//             if(list1->data<=list2->data){
//             temp->bottom = list1;
//             temp = temp->bottom;
//             list1 = list1->bottom;
//             }
//             else{
//                 temp->bottom = list2;
//                 temp = temp->bottom;
//                 list2 = list2->bottom;
//             }
//         }
//         if(list1){
//             temp->bottom = list1;
//             temp = temp->bottom;
//             list1 = list1->bottom;
//         }
//         if(list2){
//             temp->bottom = list2;
//             temp = temp->bottom;
//             list2 = list2->bottom;
//         }
//         return dummy->bottom;

//     }

//     Node *flatten(Node *root) {
//         Node* head = root;
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//         Node* newHead = flatten(head->next);
//         return merged(newHead,head);

//     }
// };