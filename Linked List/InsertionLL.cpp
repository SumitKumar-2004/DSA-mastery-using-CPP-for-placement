// Insertion in LL
#include <bits/stdc++.h>
using namespace std;
// Creation of Node
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
// Print Linked List
void printLL(Node *head)
{
   Node *temp = head;

   while (temp)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}
// Insert a head of the LL
Node *insertHead(Node *head, int val)
{
   Node *temp = new Node(val, head);
   return temp;
}
// Insert at the tail of LL
Node *insertTail(Node *head, int val)
{
   if (head == NULL)
   {
      return new Node(val);
   }
   Node *temp = head;
   while (temp->next != NULL)
   {
      temp = temp->next;
   }
   Node *newNode = new Node(val);
   temp->next = newNode;
   return head;
}
// Insert element at kth possition in LL
Node *insertPosition(Node *head, int el, int k)
{
   if (head == NULL)
   {
      if (k == 1)
      {
         return new Node(el);
      }
      else
      {
         return head;
      }
   }
   if (k == 1)
   {
      return new Node(el, head);
   }
   int count = 0;
   Node *temp = head;
   while (temp != NULL)
   {
      count++;
      if (count == (k - 1))
      {
         Node *x = new Node(el, temp->next);
         temp->next = x;
         break;
      }
      temp = temp->next;
   }
   return head;
}
// Insert element before that value
Node *insertBeforeValue(Node *head, int el, int val)
{
   if (head == NULL)
   {
      return NULL;
   }
   if (head->data == val)
   {
      return new Node(el, head);
   }
   Node *temp = head;
   while (temp->next != NULL)
   {
      if (temp->next->data == val)
      {
         Node *x = new Node(el, temp->next);
         temp->next = x;
         break;
      }
      temp = temp->next;
   }
   return head;
}
int main()
{
   vector<int> arr = {100, 200, 300, 400};
   Node *head = convertArr2LL(arr);

   // head = insertHead(head,600);
   // printLL(head);

   // head = insertTail(head,2300);
   // printLL(head);

   // head = insertPosition(head, 2222, 3);
   // printLL(head);

   head = insertBeforeValue(head, 2222, 200);
   printLL(head);
}