//binary tree=>0,1,2

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
     
    Node *left;
    Node *right;
    
   
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void inorder(Node *root){
    if(root==NULL)
    return;
    
    else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void preorder(Node *root){
    if(root==NULL)
    return;
    
    else{
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root){
    if(root==NULL)
    return;
    
    else{
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main()
{
  Node *root=new Node(10);
  
  root->left=new Node(20);
  root->right=new Node(30);
 
  root->left->left=new Node(40);
  root->left->right=new Node(50);
  
  root->right->left=new Node(60);
  root->right->right=new Node(70);
 
 inorder(root);
 cout<<endl;
 preorder(root);
 cout<<endl;
 postorder(root);
 
    return 0;
}
