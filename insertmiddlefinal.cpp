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
int main()
{
    Node *head=new Node(12);
    head->next=new Node(14);
    head=insertAtMiddle(head,34,0);
    head=insertAtMiddle(head,89,2);
    head=insertAtMiddle(head,394,1);
     head=insertAtMiddle(head,3394,12);
    print(head);
    // Node nn;
    // Node *hh=&nn;

    return 0;
}
