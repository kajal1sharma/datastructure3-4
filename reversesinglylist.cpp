
#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node * next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};



void print(Node *head){
    while(head!=NULL){
        cout<<head->data<< " ";
        head=head->next;
    }
}

Node * reverselinkedlist(Node*head){
    
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    return head;
    
    Node* temp=head;
    Node* current=NULL;
    head=head->next;
    while(head!=NULL){
        temp->next=current;
        current=temp;
        temp=head;
        head=head->next;
    }
    temp->next=current;
    head=temp;
    return head;
    
}
   
int main()
{
    Node * head=new Node(12);
    head->next=new Node(14);
    head->next->next=new Node(16);
    head->next->next->next=new Node(18);
    head->next->next->next->next=new Node(20);
    head=reverselinkedlist(head);
    print(head);
    return 0;
}
