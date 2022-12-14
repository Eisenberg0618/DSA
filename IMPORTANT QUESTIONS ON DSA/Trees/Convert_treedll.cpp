// convert a binary tree into doubly linked list
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int a)
    {
        data = a;
        left = right = NULL;
    }
};
Node *conversion(Node *root)
{
    if (root == NULL)
        return root;
    static Node *prev = NULL;
    Node *head = conversion(root->left);
    if (prev == NULL)
        head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    conversion(root->right);
    return head;
}
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->right;
    }
    cout << endl;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);
    Node *head = conversion(root);
    printList(head);
    return 0;
}