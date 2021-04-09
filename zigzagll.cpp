   // 2->8->6->16->4->100->90
#include <iostream>

using namespace std;

class Node{
    public :
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void zigzag(Node* head){
    Node *current=head;
    int flag=0;
    while(current->next!=NULL){
        if(flag==0){
            if(current->data>current->next->data){
                int temp=current->data;
                current->data=current->next->data;
                current->next->data=temp;
                current=current->next;
                
            }
            flag=1;
        }
        else if(flag==1){
            if(current->data<current->next->data){
                int temp=current->data;
                current->data=current->next->data;
                current->next->data=temp;
                current=current->next;
            }
            flag=0;
        }
    }
}
//2->6->8->4->16->90->100

void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node *head=new Node(2);
    head->next=new Node(6);
    head->next->next=new Node(8);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(16);
    head->next->next->next->next->next=new Node(90);
    head->next->next->next->next->next->next=new Node(100);
    zigzag(head);
    print(head);

    return 0;
}
