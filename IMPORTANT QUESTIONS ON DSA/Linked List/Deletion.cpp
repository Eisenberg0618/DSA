// Deletion in Linked list
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
Node *InsertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    temp->next = head;
    return temp;
}
Node *InsertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
Node *DeleteFirst(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head->next;
    delete (head);
    return temp;
}
Node *DeleteLast(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;
    return head;
}
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head = InsertBegin(head, 10);
    head = InsertBegin(head, 20);
    head = InsertEnd(head, 40);

    printList(head);

    return 0;
}