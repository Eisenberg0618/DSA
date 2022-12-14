// intersection of Linked List
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
int getInter(Node *head1, Node *head2)
{
    unordered_set<Node *> s;
    Node *curr = head1;
    while (curr != NULL)
    {
        s.insert(curr);
        curr = curr->next;
    }
    curr = head2;
    while (curr != NULL)
    {
        if (s.find(curr) != s.end())
            return curr->data;
        curr = curr->next;
    }
    return -1;
}
int main()
{
    Node *newNode;
    Node *head1 = new Node(10);
    Node *head2 = new Node(3);
    newNode = new Node(6);
    head2->next = newNode;
    newNode = new Node(9);
    head2->next->next = newNode;
    newNode = new Node(15);
    head1->next = newNode;
    head2->next->next = newNode;
    head1->next->next->next = NULL;
    cout << getInter(head1, head2);
    return 0;
}