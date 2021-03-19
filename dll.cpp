// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->prev-NULL;
        this->next=NULL;
    }
};

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<< "  ";
        head=head->next;
    }
}
int main() {
    Node *head=NULL;
    head=new Node(12);
    
    Node *temp=new Node(14);
    head->next=temp;
    temp->prev=head;
    
    temp=new Node(16);
    head->next->next=temp;
    temp->prev=head->next;
    
    temp=new Node(18);
    head->next->next->next=temp;
    temp->prev=head->next->next;
    
    
    print(head);
    
    
    

    return 0;
}