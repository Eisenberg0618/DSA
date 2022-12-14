// palindrome in linked List
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
bool isPalindrome(Node *head)
{
    stack<char> s;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        s.push(curr->data);
    }
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        if (s.top() != curr->data)
            return false;
        s.pop();
    }
    return true;
}
int main()
{
    Node *head = new Node('A');
    head->next = new Node('B');
    head->next->next = new Node('C');
    head->next->next->next = new Node('E');
    head->next->next->next->next = new Node('F');
    if (isPalindrome(head))
        cout << "is palindrome ";
    else
        cout << "is not a palindrome ";
    return 0;
}