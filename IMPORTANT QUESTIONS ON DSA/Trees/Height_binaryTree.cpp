// height of binary tree
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    struct Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
int height(Node *root)
{
    if (root = NULL)
        return 0;
    else
    {
        return (1 + max(height(root->left), height(root->right)));
    }
}
int main()
{
    Node *rooot = new Node(10);
    rooot->left = new Node(20);
    rooot->right = new Node(30);
    rooot->right->left = new Node(40);
    rooot->right->right = new Node(50);
    cout << height(rooot);
    return 0;
}