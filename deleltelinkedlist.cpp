#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node * insertAtMiddle(Node *head,int data ,int position){
    Node *temp=new Node(data);
    if(position ==0){
         if(head==NULL){
             head=temp;
         }   
         else{
            temp->next=head; 
            head=temp;
         }
    }
    else{
    int size=0;
    
    Node *current=head;
    while(current!=NULL){
        size++;
        current=current->next;
    }
    position=position%(size);
    current=head;
   while(current!=NULL){
       if(position==1){
           temp->next=current->next;
           current->next=temp;
           break;
       }
       position--;
      current=current->next;
   }
    }
    
    return head;
}
Node * deletestart(Node *head){
    if(head==NULL){
        return NULL;
    }
    else{
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete(temp);
        return head;
    }
}
Node * deleteend(Node *head){
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
       head=NULL;
       return head;
    }
    else{
        Node *current=head;
        while(head->next->next!=NULL){
            head=head->next;
        }
        Node *temp=head->next;
        head->next=NULL;
        delete(temp);
        
        
        return current;
    }
}
Node * middledelete(Node *head,int middle){
    if(middle==0){
        return deletestart(head);
    }
    else{
        
    }
}
int main()
{
    Node *head=new Node(12);
    head->next=new Node(14);
    head=insertAtMiddle(head,34,0);
    head=insertAtMiddle(head,89,2);
    head=insertAtMiddle(head,394,1);
    head=insertAtMiddle(head,3394,12);
     
    print(head);
    cout<<"\n";
    head= deleteend(head);
    head=deletestart(head);
    head=middledelete(head,2);
    print(head);
    // Node nn;
    // Node *hh=&nn;

    return 0;
}
