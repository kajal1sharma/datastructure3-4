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

void recurprint(Node *head){
    
    if(head==NULL)
    return;
    
    cout<<head->data<<" ";
    recurprint(head->next);
}
int main() {
Node *head=new Node(12);
head->next=new Node(14);
head->next->next=new Node(16);
head->next->next->next=new Node(18);
recurprint(head);

    return 0;
}