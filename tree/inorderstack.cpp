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
 
    return 0;
}
