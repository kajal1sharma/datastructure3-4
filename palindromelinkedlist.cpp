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
Node * reverselinkedlist(Node*head){
    
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    return head;
    
    Node* temp=head;
    Node* current=NULL;
    head=head->next;
    while(head!=NULL){
        temp->next=current;
        current=temp;
        temp=head;
        head=head->next;
    }
    temp->next=current;
    head=temp;
    return head;
    
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<"  ";
        head=head->next;
    }
    cout<<"\n";
}
bool ispalindrome(Node * head,Node*head2){
    if(head==NULL ){
        return true;
    }
    else{
        if(head->data==head2->data){
            return ispalindrome(head->next,head2->next);
            
        }
        else{
            return false;
        }
    }
}
int main()
{
   Node *head=new Node(1);
   head->next=new Node(2);
   head->next->next=new Node(3);
   head->next->next->next=new Node(2);
   head->next->next->next->next=new Node(1);
   
   Node* head2=copy(head);
   head2=reverselinkedlist(head2);
  
  if(ispalindrome(head,head2)){
      cout<<"yes palindrome";
      
  }
  else{
      cout<<"not a palindrome";
  }
    return 0;
}
