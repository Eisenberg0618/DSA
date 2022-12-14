// Reverse Linked List
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
void PrintList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
// Naive method
Node *Reverse(Node *head)
{
    Node *curr = head;
    vector<int> v;
    for (curr = head; curr != NULL; curr = curr->next)
    {
        v.push_back(curr->data);
    }
    for (curr = head; curr != NULL; curr = curr->next)
    {
        curr->data = v.back();
        v.pop_back();
    }
    return head;
}
// Efficient Method
Node *reverse(Node *head)
{
    Node *prev = NULL, *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
// Recursive way
Node *reverseRec(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *restHead = reverseRec(head->next);
    Node *restTail = head->next;
    restTail->next = head;
    head->next = NULL;
    return restHead;
}
Node *reverseRecu(Node *curr, Node *prev)
{
    if (curr == NULL)
        return prev;
    Node *next = curr->next;
    curr->next = prev;
    return reverseRecu(next, curr);
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    PrintList(head);
    cout << "Reversed Linked List: ";
    head = reverseRecu(head, NULL);
    PrintList(head);
    return 0;
}