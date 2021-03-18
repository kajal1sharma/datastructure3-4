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
bool findkey(Node* head,int key){
    while(head!=NULL){
        if(key==head->data){
            return true;
        }
        head=head->next;
    }
    return false;
}

int main()
{
    Node *head=new Node(12);
    head->next=new Node(14);
    head->next->next=new Node(24);
    head->next->next->next=new Node(224);
    head->next->next->next->next=new Node(17);
    head->next->next->next->next->next=new Node(56);
    head->next->next->next->next->next->next=new Node(89);
    head->next->next->next->next->next->next->next=new Node(23);
    print(head);
    
    bool b=findkey(head,224);
    if(b==false){
        cout<<"not found";
    }
    else{
        cout<<"found";
    }

    //second linked list =>copy
    //second linked list=>reverse paste;
    
    return 0;
}
