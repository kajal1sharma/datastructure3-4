#include <iostream>

using namespace std;

class Node{
    public :
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node * partition(Node *head,Node *tail,Node **headp, Node **tailp){
    Node *pivot=tail;
    *headp=head;
    Node *prev=NULL;
    while(head!=pivot){
        if(head->data<pivot->data){
             if(prev==NULL){
                *headp=head->next;
                prev=head->next;
            }
            head=head->next;
           
        }
        else if(head->data>pivot->data){
            if(prev==NULL){
                *headp=head->next;
            }
            else{
                prev->next=head->next;
            }
            Node *temp=NULL;
            temp=head->next;
            head->next=NULL;
            tail->next=head;
            tail=tail->next;
            head=temp;
        }
    }
    
    *tailp=tail;
}
Node * Quicksort(Node *head, Node * tail){
    
    Node *headp=NULL,tailp=NULL;
    Node *pivot=partition(head,tail,&headp,&tailp);
    //Quicksort()
    
}


Node* gettail(Node *head){
     
     while(head->next!=NULL){
        head=head->next;    
     }
     
     return head;
}

void print(Node * head){
    while(head!=NULL){
        cout<< head->data<<" ";
        head=head->next;
    }
}

int main()
{
    Node *head=new Node(4);
    head->next=new Node(2);
   head->next->next=new Node(1);
   head->next->next->next=new Node(5);
   head->next->next->next->next=new Node(12);
   head->next->next->next->next->next=new Node(8);
   head->next->next->next->next->next->next=new Node(9);
   head->next->next->next->next->next->next->next=new Node(6);
   
   Node *tail=gettail(head);
   
   head=Quicksort(head,tail);
   
   print(head);
    return 0;
}
