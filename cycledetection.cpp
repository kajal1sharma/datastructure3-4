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

bool detectcycle(Node*head){
    Node *one=head;
    Node* two=head->next;
    while(two!=NULL &&two->next!=NULL ){
        if(one==two){
            return true;
        }
        else{
            two=two->next->next;
            one=one->next;
        }
    }
    return false;
}

int main()
{
   Node *head=new Node(10);
   head->next=new Node(20);
   head->next->next=new Node(30);
   head->next->next->next=new Node(40);
   head->next->next->next->next=new Node(50);
  // head->next->next->next->next->next=new Node(60);
  // head->next->next->next->next->next=head->next->next;
   
    if(detectcycle(head)){
        cout<<"yes there is a cycle";
    }  
    else{
        cout<<"no cycle";
    }
    return 0;
}
