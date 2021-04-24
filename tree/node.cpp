//binary tree=>0,1,2

#include <iostream>

using namespace std;

class Node{
    int data;
    public: 
    Node *left;
    Node *right;
    
   
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

int main()
{
  Node *root=new Node(10);
  
  root->left=new Node(20);
  root->right=new Node(30);
 
  root->left->left=new Node(40);
  root->left->right=new Node(50);
  
  root->right->left=new Node(60);
  root->right->right=new Node(70);
 
  
    return 0;
}
