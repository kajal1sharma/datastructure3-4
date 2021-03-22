#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node* prev;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node* head){
    Node* root=head;
    while(root!=head->next){
        cout<<head->data<<" \n";
        head=head->next;
    }
}

int main()
{
   
    Node *head=new Node(12);
    head->next=head;
    head->prev=head;
    
    Node*newnode=new Node(13);
    head->next=newnode;
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=head;
    
    newnode=new Node(14);
    head->next->next=newnode;
    newnode->next=head;
    newnode->prev=head->next;
    head->prev=newnode;
    
    print(head);
    
    return 0;
}
