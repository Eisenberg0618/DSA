// insertion in circular linked list
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
        temp->next = temp;
    else
    {
        Node *curr = head;
        while (curr->next != head)
        {

            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
        return temp;
    }
}
Node *InsertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
        return head;
    }
}
void printlist(Node *head)
{
    Node *curr = head;
    do
    {
        cout << curr->data << "-->";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}
int main()
{
    Node *head = NULL;
    head = InsertBegin(head, 10);
    head = InsertBegin(head, 20);
    head = InsertBegin(head, 30);
    head = InsertEnd(head, 40);
    printlist(head);
    return 0;
}