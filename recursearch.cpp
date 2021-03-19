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

bool recursearch(Node *head,int key){
    
    if(head==NULL)
    return false;
    
    if(head->data==key){
        return true;
    }
    return recursearch(head->next,key);
}
int main() {
    Node *head=NULL;
// Node *head=new Node(12);
// head->next=new Node(14);
// head->next->next=new Node(16);
// head->next->next->next=new Node(18);
if(recursearch(head ,17)){
    cout<<"found";
}
else{
    cout<<"not found";
}

    return 0;
}