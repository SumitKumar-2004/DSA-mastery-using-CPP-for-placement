// Leetcode 19 : Remove Nth Node from the End of List

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

// Length of Linked List
int lengthOfLL(Node *head)
{
   int count = 0;
   Node *temp = head;

   while (temp)
   {
      count++;
      temp = temp->next;
   }

   return count;
}

// Remove Nth Node From End
Node *removeNthFromEnd(Node *head, int n)
{
   int len = lengthOfLL(head);

   // Convert nth from end to kth from start
   int k = len - n + 1;

   // If head needs to be deleted
   if (k == 1)
   {
      Node *temp = head;
      head = head->next;
      delete temp;
      return head;
   }

   int count = 1;
   Node *temp = head;
   Node *prev = NULL;

   while (temp)
   {
      if (count == k)
      {
         prev->next = temp->next;
         delete temp;
         break;
      }

      prev = temp;
      temp = temp->next;
      count++;
   }

   return head;
}

int main()
{
   vector<int> arr = {10, 20, 30, 40, 50};

   Node *head = convertArr2LL(arr);

   int n = 4;

   head = removeNthFromEnd(head, n);

   printLL(head);

   return 0;
}