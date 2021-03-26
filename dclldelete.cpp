#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
}; 


void print(Node* head){
    Node* current=head;
    while(current->next!=head){
        cout<<current->data<<" ";
        current=current->next;        
    }
    cout<<current->data;
}
Node* deletefront(Node*head){
    if(head==NULL|| head->next==head){
        delete(head);
        return NULL;
    }
    else{
        
        Node *temp=head;
        
        head->prev->next=head->next;
        head->next->prev=head->prev;
        head=head->next;
        temp->next=NULL;
        temp->prev=NULL;
        delete(temp);
        return head;
    }
}
Node *deletefromend(Node *head){
    if(head->next==head || head==NULL){
        delete(head);
        return NULL;
    }
    else{
        Node *temp=head->prev;
        
        temp->prev->next=head;
        head->prev=temp->prev;
        
        delete(temp);
        return head;
    }
}

Node * deleltefrommid(Node *head, int key){
    
    if(head==NULL ||head->next==head){
        delete(head);
        return NULL;
    }
        int cnt=0;
        Node *current=head;
        while(true){
            if(key==1){
                if(cnt==0){
                head=head->next;
                }
                current->next->prev=current->prev;
                current->prev->next=current->next;
                delete(current);
                
                break;
            }
            cnt++;
            key--;
            current=current->next;
        }
        return head;
}
int main()
{
    Node *temp=new Node(20);
    Node *head=new Node(12);
    head->prev=temp;
    head->next=new Node(14);
    head->next->prev=head;
    head->next->next=new Node(16);
    head->next->next->prev=head->next;
    head->next->next->next=new Node(18);
    head->next->next->next->prev=head->next->next;
   
    head->next->next->next->next=temp;
    head->next->next->next->next->prev=head->next->next->next;
    temp->next=head;
    
    // head=deletefront(head);
    
    // head=deletefromend(head);
    
    head=deleltefrommid(head,1);
    print(head);
    
    return 0;
}
