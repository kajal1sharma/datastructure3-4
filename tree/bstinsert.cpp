//binary tree=>0,1,2
#include <bits/stdc++.h>
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
   
   stack<Node *> st ;
   Node *temp=root;
  // st.push(root);
   
   while(temp!=NULL || !st.empty()){
       
       while(temp!=NULL){
           st.push(temp);
           temp=temp->left;
           
       }
       
       temp=st.top();
       st.pop();
       cout<<temp->data<<" ";
       
       temp=temp->right;
   }
}

Node * createnode(Node* root, int key){
    if(root==NULL){
        Node *temp=new Node(key);
        root=temp;
        return root;
    }
    
    if(root->data<key){
        root->right=createnode(root->right,key);
    }
    else{
        root->left=createnode(root->left,key);
    }
    return root;
}
int main()
{
  Node *root=NULL;
  root=createnode(root,20);
  root=createnode(root,10);
  root=createnode(root,90);
  root=createnode(root,40);
  root=createnode(root,60);
inorder(root);
 
    return 0;
}
