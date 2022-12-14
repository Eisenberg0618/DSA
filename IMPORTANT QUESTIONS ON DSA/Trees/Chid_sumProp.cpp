// children sum property
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
bool childsum(Node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    int sum = 0;
    if (root->left != NULL)
        sum += root->left->data;
    if (root->right != NULL)
        sum += root->right->data;
    return (root->data == sum && childsum(root->left) && childsum(root->right));
}
int main()
{
    Node *root = new Node(100);
    root->left = new Node(50);
    root->right = new Node(50);
    cout << childsum(root);
    return 0;
}