// deleltion in circular linked list
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
Node *Deletefirst(Node *head)
{
    Node *temp = head;
    if (head == NULL)
        temp->next = temp;
    if (head->next == head)
    {
        delete (head);
        return NULL;
    }
    Node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = head->next;
    delete (head);
    return curr->next;
}
// efficeint method
Node *DeleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}
Node *Deletekth(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
        return DeleteHead(head);
    Node *curr = head;
    for (int i = 0; i < k - 2; i++)
        curr = curr->next;
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}
void PrintList(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = Deletefirst(head);
    head = Deletekth(head, 3);
    PrintList(head);
    return 0;
}