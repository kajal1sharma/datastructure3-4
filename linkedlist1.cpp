
#include <iostream>

class Node{
    public: 
    int a;
    Node *next;
    Node(int a){
        this->a=a;
        next=NULL;
    }
};


using namespace std;

int main()
{
    Node *newnode=new Node(12);
    Node *secondnode=new Node(14);
    Node *thirdnode=new Node(16);
    Node *fourthnode=new Node(20);
    newnode->next=secondnode;
    newnode->next->next=thirdnode;
    //secondnode->next=thirdnode;
    newnode->next->next->next=fourthnode;
    //thirdnode->next=fourthnode;
    //cout<<newnode->a;
    cout<<newnode->next->a;
    cout<<secondnode->next->a;
    cout<<newnode->next->next->a;
    cout<<newnode->next->next->next->a;
    return 0;
}
