// Nth Node in linked list
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
// Naive Solution
void printNth(Node *head, int n)
{
    if (head == NULL)
        return;
    int count = 0;
    Node *curr;
    for (curr = head; curr != NULL; curr = curr->next)
        count++;
    curr = head;
    if (count < n)
        return;
    for (int i = 1; i < (count - n + 1); i++)
    {
        curr = curr->next;
    }
    cout << curr->data << " ";
}
// Efficient Solution
void PrintNth(Node *head, int n)
{
    if (head == NULL)
        return;
    Node *first = head;
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
            return;
        first = first->next;
    }
    Node *second = head;
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->data;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printList(head);
    cout << "Nth Node of Linked List is : ";
    PrintNth(head, 2);
    return 0;
}