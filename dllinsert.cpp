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
Node * createnode(Node* head,int data)
{
    Node * temp=new Node(data);
    if(head==NULL){
        head=temp;
    }
    else{
        Node *current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=temp;
        temp->prev=current;
    }
    return head;
}
Node * insertatfront(Node* head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    return head;
}
int getsize(Node *head){
    if(head==NULL){
        return 0;
    }
    else{
        return getsize(head->next)+1;
    }
}
Node * insertinmiddle(Node* head,int data, int position){
    
    if(head==NULL){
        head=createnode(head,data);
    }
    else if(position ==1){
        head=insertatfront(head,data);
    }
    else{
        Node *temp=new Node(data);
        Node *current=head;
        int size=getsize(head);
             
        while(current->next!=NULL){
            if(position==1){
               break;
            }
            current=current->next;
            position--;
        }
        if(position==1){
                temp->prev=current->prev;
                temp->next=current;
                current->prev->next=temp;
                current->prev=temp;
        }
        if(position==2){
            temp->prev=current;
            current->next=temp;
        }
    }
    return head;
}
int main() {
    Node *head=NULL;
    head=createnode(head,12);
    head=createnode(head,14);
    head=createnode(head,16);
    head=createnode(head,18);
    head=createnode(head,20);
    head=insertatfront(head,10);
    head=insertinmiddle(head,15,4);
     head=insertinmiddle(head,21,8);
    print(head);
    
    
    

    return 0;
}