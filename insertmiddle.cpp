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
        cout<<head->data;
        head=head->next;
    }
}

void insertAtMiddle(Node *head,int data ,int position){
    Node *temp=new Node(data);
   while(head!=NULL){
       if(position==1){
           temp->next=head->next;
           head->next=temp;
           break;
       }
       position--;
      head=head->next;
   }
}
int main()
{
    Node *head=new Node(12);
    head->next=new Node(14);
    insertAtMiddle(head,34,1);
    print(head);
    // Node nn;
    // Node *hh=&nn;

    return 0;
}
