// diameter of tree
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
int height(Node* root)
{
    if(root==NULL)
    return 0;
    else
    return 1+max(height(root->left),height(root->right));
}
int diameter(Node* root)
{
    if(root==NULL)
    return 0;
    int d1=1+height(root->left);
    int d2=diameter(root->left);
    int d3=diameter(root->right);
    return max(d1,max(d1,d3));
}
int main()
{
    return 0;
}