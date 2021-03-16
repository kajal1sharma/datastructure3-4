
#include <iostream>

using namespace std;

class Node{
    public:
    int data1;
    int data2;
    Node *next;//stores the address of the next node
    
    Node(int data1, int data2){
        this->data1=data1;
        this->data2=data2;
        this->next=NULL;
    }
};

 Node* createnode(Node *head,int d1,int d2){
    Node *temp=new Node(d1,d2);   
    if(head==NULL){
        head=temp;
    }
    else{
        //Node *current=head;
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=temp;
    }
    
    return head;
}

void printnode(Node *root){
    
    for(;root!=NULL;){
        cout<<root->data1<< " "<<root->data2<<"\n";
        root=root->next;
    }
    
}

int main()
{
        Node *head=NULL;//=new Node(14,45);
        
       head=createnode(head,12,14);
        createnode(head,15,80);
        createnode(head,187,174);
        
        printnode(head);
        
        // cout<<head->data1<<"  "<<head->data2<<"  \n";
        // cout<<head->next->data1<<"  "<<head->next->data2<<"  \n";
        // cout<<head->next->next->data1<<"  "<<head->next->next->data2<<"  \n";
    return 0;
}
