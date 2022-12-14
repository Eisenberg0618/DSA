// Remove Duplicates in Linked Lists
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
Node *removeDup(Node *head)
{

    Node *curr = head, *prev = head;
    while (curr != NULL)
    {
        if (curr->data != prev->data)
        {
            prev->next = curr;
            prev = curr;
        }
        curr = curr->next;
    }
    if (prev != curr)
        prev->next == NULL;
    return head;
}
Node *push(Node *head, int new_data)
{
    Node *new_node = new Node(new_data);
    new_node->next = head;
    head = new_node;
    return head;
}
void Removedup(Node *head)
{
    Node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr = curr->next->next;
            delete (temp);
        }

        curr = curr->next;
    }
}

int main()
{
    Node *head = NULL;
    head = push(head, 10);
    head = push(head, 20);
    head = push(head, 20);
    head = push(head, 30);
    head = push(head, 30);
    printList(head);
    cout << "Remove Dup : ";
    removeDup(head);
    printList(head);
    return 0;
}