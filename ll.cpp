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
    Node *odd=head,*even=head->next,*oddhead,*evenhead,*head1,*head2;
    head1=new Node(odd->data);
    oddhead=head1;
    head2=new Node(even->data);
    evenhead=head2;
    
    while(odd!=NULL  && odd->next!=NULL){
    odd=odd->next->next;
        if(odd!=NULL){
        head1->next=new Node(odd->data);
        head1=head1->next;
        }
        else{
            head1->next=NULL;
        }
    }
    while(even!=NULL && even->next!=NULL){
    even=even->next->next;
        if(even!=NULL){
        head2->next=new Node(even->data);
        head2=head2->next;
        }
        else{
            head2->next=NULL;
        }
    }
    
    head1->next=evenhead;
    return oddhead;
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
    
    Node *nhead=rearrange(head);
    
    print(nhead);
    

    return 0;
}
