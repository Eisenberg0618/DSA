// Tree traversal. 1) inorder 2) perorder 3) postorder
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
void printInorder(struct Node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " " << endl;
    printInorder(node->right);
}
void preorder(struct Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " " << endl;
    preorder(node->left);
    preorder(node->right);
}
void postorder(struct Node *node)
{
    if (node == NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " " << endl;
}
int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << "inorder traversal of binary tree is : " << endl;
    printInorder(root);
    cout << "preorder traversal of binary tree is : " << endl;
    preorder(root);
    cout << "postorder traversal of binary tree is : " << endl;
    postorder(root);
    return 0;
}