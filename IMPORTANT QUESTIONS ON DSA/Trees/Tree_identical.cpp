// tree identical or not
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};
int identicalTree(Node *a, Node *b)
{
    if (a == NULL && b == NULL)
        return 1;
    if (a != NULL && b != NULL)
        return (a->data == b->data && identicalTree(a->left, b->left) && identicalTree(a->right, b->right));
    return 0;
}
int main()
{
    Node *a = new Node(1);
    a->left = new Node(2);
    a->right = new Node(3);
    Node *b = new Node(1);
    b->left = new Node(2);
    b->right = new Node(3);
    identicalTree(a, b);
    return 0;
}