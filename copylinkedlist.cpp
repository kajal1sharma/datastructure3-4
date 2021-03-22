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
Node* copyrec(Node* head){
    if(head==NULL){
        return NULL;
    }
    else{
        Node* newnode=new Node(head->data);
        Node* temp=copyrec(head->next);
        newnode->next=temp;
        return newnode;
    }
}

Node* copy(Node* head){
    Node* head2=NULL;
    if(head==NULL)
    return NULL;
    else{
        Node *newnode=new Node(head->data);
        head2=newnode;
        head=head->next;
        Node* current=head2;
        
        while(head!=NULL){
  
            Node *newnode=new Node(head->data);
           current->next=newnode;
            current=current->next;
            head=head->next;
        }
        
        return head2;
    }
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<"  ";
        head=head->next;
    }
    cout<<"\n";
}
int main()
{
   Node *head=new Node(12);
   head->next=new Node(13);
   head->next->next=new Node(14);
   head->next->next->next=new Node(15);
   head->next->next->next->next=new Node(16);
   
   Node* head2=copy(head);
   print(head);
   print(head2);
   Node* head3=copyrec(head);
   print(head3);
    return 0;
}
