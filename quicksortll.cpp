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
                *headp=head;
                prev=head;
            }
            else if(prev!=NULL){
            
                prev=prev->next;
            }
            head=head->next;
           
        }
        else if(head->data>pivot->data){
            
            Node *temp=NULL;
            temp=head->next;
            if(prev==NULL){
                *headp=head->next;
            }
            else{
                prev->next=head->next;
            }
            head->next=NULL;
            tail->next=head;
            tail=tail->next;
            head=temp;
        }
    }
    *tailp=tail;
    return pivot;
}

Node* gettail(Node *head){
     
     while(head->next!=NULL){
        head=head->next;    
     }
     
     return head;
}

Node * Quicksort(Node *head, Node * tail){
    
    if(head==NULL || head==tail){
        return head;
    }
    
    Node *headp=NULL,*tailp=NULL;
    Node *pivot=partition(head,tail,&headp,&tailp);
    
    if(headp!=pivot)
    {
    Node* current=headp;
    while(current->next!=pivot){
        current=current->next;
    }
    current->next=NULL;
    headp=Quicksort(headp,current);
    current=gettail(headp);
    current->next=pivot;
    }
    
    pivot->next=Quicksort(pivot->next,tailp);
    
    return headp;
    
}




void print(Node * head){
    while(head!=NULL){
        cout<< head->data<<" ";
        head=head->next;
    }
}

int main()
{
    Node *head=new Node(41);
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
