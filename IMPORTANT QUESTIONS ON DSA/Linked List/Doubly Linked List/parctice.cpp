// Insertion, deletion, implementation
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
Node *InsertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    temp->next = head;
    head->prev = temp;
    return temp;
}
Node *InsertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return head;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    temp->prev = curr;
    curr->next = temp;
    return head;
}
Node *DeleteFirst(Node *head)
{
    Node *temp = head;
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }
    else
    {
        head = head->next;
        head->prev = NULL;
        delete (temp);
        return head;
    }
}
Node *DeleteLast(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    return head;
}
void PrintList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "-->";
        curr = curr->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    head = InsertBegin(head, 10);
    head = InsertBegin(head, 20);
    head = InsertBegin(head, 30);
    head = InsertEnd(head, 40);
    head = DeleteLast(head);
    head = DeleteFirst(head);
    PrintList(head);
    return 0;
}