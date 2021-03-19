// Online C++ compiler to run C++ program online
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
void print(Node * head){
    while(head!=NULL){
        cout<<head->data<<"  ";
        head=head->next;
    }
}
Node *copylist(Node *head){
    Node *head2=NULL;
    Node *current;
    if(head==NULL){
        return NULL;
    }
    current=new Node(head->data);
    head2=current;
    Node *root=head2;
    head=head->next;
    while(head!=NULL){
        current=new Node(head->data);
        
        head2->next=current;
        head2=head2->next;
        head=head->next;
    }
    return root;
}
int main() {
Node *head=new Node(12);
head->next=new Node(14);
head->next->next=new Node(16);
head->next->next->next=new Node(18);
print(head);

Node *head2=NULL;
head2=copylist(head);
print(head2);
    return 0;
}