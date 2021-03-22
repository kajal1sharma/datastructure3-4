
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
        this->prev=NULL;
    }
};



void print(Node *head){
    while(head!=NULL){
        cout<<head->data<< " ";
        head=head->next;
    }
}

Node * deletefront(Node *head){
    if(head==NULL){
        return NULL;
    }
    else{
        Node *temp=head;
        head=head->next;
        if(head!=NULL){
            temp->next=NULL;
            head->prev=NULL;
            delete(temp);
        }
    }
    return head;
}

Node * deleteend(Node *head){
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        delete(head);
        return NULL;
    }
    else{
        Node* current =head;
        
        while(current->next!=NULL){
            current=current->next;
        }
        current->prev->next=NULL;
            current->prev=NULL;
            delete(current);
            return head;
    }
}

Node * middledelete(Node* head,int key){
    
    Node* current=head;
    while(key!=1 && current!=NULL){
        key--;
        current=current->next;
    }
    
    if(key==1){
        current->next->prev=current->prev;
        current->prev->next=current->next;
        current->next=NULL;
        current->prev=NULL;
        delete(current);
    }
}
int main()
{
    Node * head=new Node(12);
    head->next=new Node(14);
    head->next->prev=head;
    head->next->next=new Node(16);
    head->next->next->prev=head->next;
    head->next->next->next=new Node(18);
    head->next->next->next->prev=head->next->next;
    
   // print(head->next->next->next);
    
   // head=deletefront(head);
//    deleteend(head);
    middledelete(head,2);
    print(head);
    return 0;
}
