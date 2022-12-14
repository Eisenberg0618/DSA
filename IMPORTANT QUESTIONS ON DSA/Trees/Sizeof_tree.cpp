// size of binary tree
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
int getsize(Node *root)
{
    if (root = NULL)
        return 0;
    else
        1 + getsize(root->left) + getsize(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    getsize(root);
    return 0;
}