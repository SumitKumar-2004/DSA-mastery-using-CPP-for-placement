//Leetcode : 237 Delete a Node in Linked List

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

// Leetcode 237 Logic
void deleteNode(Node *node)
{
    Node *temp = node->next;

    node->data = temp->data;

    node->next = temp->next;

    delete temp;
}

int main()
{
    vector<int> arr = {4, 5, 1, 9};

    Node *head = convertArr2LL(arr);

    cout << "Before Deletion: ";
    printLL(head);

    // Delete node having value 5
    // In LeetCode, this node is directly provided
    Node *node = head->next;

    deleteNode(node);

    cout << "After Deletion: ";
    printLL(head);

    return 0;
}