// print left Node
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
};
int maxlevel = 0;
void Printlvl(Node *root, int level)
{
    if (root == NULL)
        return;
    if (maxlevel < level)
    {
        cout << root->data << " ";
        maxlevel = level;
    }
    Printlvl(root->left, level + 1);
    Printlvl(root->right, level + 1);
}
void printleftview(Node *root)
{
    Printlvl(root, 1);
}
void BFS(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == 0)
                cout << root->data << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    BFS(root);
    return 0;
}