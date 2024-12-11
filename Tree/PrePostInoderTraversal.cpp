#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
void inorder(Node* root)
{
    if(root==NULL)return ;
    inorder(root->left);
    cout<<root->data;
    
    inorder(root->right);
}
void preorder(Node* root)
{
    if(root==NULL)return ;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)return ;
    postorder(root->right);
    cout<<root->data;
    postorder(root->left);
    
}
int main() {
  
        struct Node* root=new Node(1);
        root->left=new Node(2);
        root-> right=new Node(3);
        root->left->right=new Node(4);
        cout<<"In order Traversal : ";
       inorder(root);
        cout<<endl;
        
        cout<<"Pre order Traversal : ";
        preorder(root);
        cout<<endl;
        
        cout<<"Post order Traversal : ";
        postorder(root);
        cout<<endl;
       
        
    return 0;
}
