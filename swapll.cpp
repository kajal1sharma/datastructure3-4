#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->next=NULL;
        this->data=data;
    }
};

Node * rearrange(Node* head){
   Node *prev=NULL,*temp1=head,*temp2=head->next;
   head=head->next;
   
   
   while(temp1!=NULL && temp2!=NULL){
       
       temp1->next=temp2->next;
       temp2->next=temp1;
       if(prev==NULL){
           prev=temp1;
       }
       else{
           prev->next=temp2;
           prev=temp1;
       }
       temp1=temp1->next;
       
       
       if(temp1!=NULL)
       temp2=temp1->next;
   }
   return head;
}


Node* print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
    
        head=head->next;
    }
}
int main()
{
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=new Node(6);
    head->next->next->next->next->next->next=new Node(7);
    Node *nhead=rearrange(head);
    
    print(nhead);
    

    return 0;
}
