// maximum in binary tree
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
int MaximumBT(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    else
        return max(root->data, max(MaximumBT(root->left), MaximumBT(root->right)));
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    MaximumBT(root);
    return 0;
}
