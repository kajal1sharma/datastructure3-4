#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

Node * insert(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        head=temp;
        head->next=head;
        head->prev=head;
        return head;
    }
    else{
        Node *current=head;
        
        while(current->next!=head){
            current=current->next;
        }
        
        temp->next=head;
        temp->prev=current;
        current->next->prev=temp;
        current->next=temp;
    }
    return head;
}
void print(Node *head){
    cout<<head->data<<" ";
    Node *current=head->next;
    while(current!=head){
        cout<<current->data<<" ";
        current=current->next;
    }
}

Node * insertmid(Node* head,int data){
    Node *temp=new Node(data);
    
    if(head==NULL){
        head=temp;
        head->next=head;
        head->prev=head;
    }
    else{
        
        if(head->data>data){
            temp->next=head;
            temp->prev=head->prev;
            head->prev->next=temp;
            head->prev=temp;
            head=temp;
        }
        else{
        int flag=0;
        Node *current=head->next;
        while(current!=head){
            if(current->data>data){
                flag=1;
                temp->next=current;
                temp->prev=current->prev;
                current->prev->next=temp;
                current->prev=temp;
                break;
            }
            current=current->next;
        }
        
        if(flag==0){
                temp->next=current;
                temp->prev=current->prev;
                current->prev->next=temp;
                current->prev=temp;
        }
    }
    }
    return head;
}
Node* copy(Node* head){
    Node* current=head;
    Node* current2=NULL;
    Node* head2=NULL;
    while(current->next!=head){
        Node*temp=new Node(current->data);
        if(current==head){
            head2=temp;
            head2->next=head2;
            head2->prev=head2;
            current2=head2;
        }
        else{
            temp->prev=current2;
            temp->next=current2->next;
            current2->next->prev=temp;
            current2->next=temp;
            
            current2=current2->next;
        }
        current=current->next;
    }
            Node*temp=new Node(current->data);
            temp->prev=current2;
            temp->next=current2->next;
            current2->next->prev=temp;
            current2->next=temp;
            
            return head2;
}
int main()
{
    Node *head=NULL;
    head=insert(head,20);
    head=insert(head,22);
    head=insert(head,24);
    head=insert(head,26);
    head=insert(head,28);

//correct position in a sorted array
    head=insertmid(head,25);
     head=insertmid(head,19);
    print(head);
    Node* head2=copy(head);
    cout<<"\n";
    head2->next->next->data=99;
    print(head2);
    return 0;
}
