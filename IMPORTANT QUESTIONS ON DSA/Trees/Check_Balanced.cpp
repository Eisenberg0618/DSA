// check for balanced binary tree
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
int isBalanced(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = isBalanced(root->left);
    if (lh == -1)
        return -1;
    int rh = isBalanced(root->right);
    if (rh == -1)
        return -1;
    if (abs(lh - rh) > 1)
        return -1;
    else
        return 1 + max(lh, rh);
}
int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return 1 + max(height(root->left), height(root->right));
}
bool checkBalanced(Node *root)
{
    if (root == NULL)
        return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh - rh) <= 1 && checkBalanced(root->left) && checkBalanced(root->right));
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(30);
    root->right->left = new Node(15);
    root->right->right = new Node(20);
    // root->right->right->right = new Node(30);
    if (isBalanced(root))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;
    return 0;
}