// Creating a linked list

#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
   int data;
   Node *next;

public:
   Node(int data1, Node *next1)
   {
      data = data1;
      next = next1;
   }

public:
   Node(int data1)
   {
      data = data1;
      next = nullptr;
   }
};
// Convert Array to Linked List
Node *convertArr2LL(vector<int> &arr)
{
   Node *head = new Node(arr[0]);
   Node *mover = head;
   for (int i = 1; i < arr.size(); i++)
   {
      Node *temp = new Node(arr[i]);
      mover->next = temp;
      mover = temp;
   }
   return head;
}
// length of a linked list
int lengthOfLL(Node *head)
{
   int count = 0;
   Node *temp = head;
   while (temp)
   {
      temp = temp->next;
      count++;
   }
   return count;
}
// search in a linked list
int checkIfPresent(Node *head, int val)
{
   Node *temp = head;

   while (temp)
   {
      if (temp->data == val)
      {
         return 1;
      }
      temp = temp->next;
   }
   return 0;
}

int main()
{
   vector<int> arr = {112, 4, 1, 5};
   // Node* y = new Node(arr[2]);
   // cout << y->data;

   Node *head = convertArr2LL(arr);
   // cout<<head->data;

   // traversal of a ll
   //  Node* temp = head;
   //  while (head)
   //  {
   //     cout<<temp->data<<" ";
   //     temp= temp->next;
   //  }

   // cout<<lengthOfLL(head);

   cout<<checkIfPresent(head,112);
}