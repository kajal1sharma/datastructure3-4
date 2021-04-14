#include <iostream>

using namespace std;


class Node{
    int priority;
    int data;
    Node * next;
    public:
    Node(int data,int priority){
        this->priority=priority;
        this->data=data;
        this->next=NULL;
        
    }
};

class PriorityQueue{
    Node *front=NULL;
    Node *rear=NULL;
    
    public:
    
    void enqueue(int data, int priority){
        Node *newnode=new Node(data,priority);
        
        if(this->rear==NULL){
            this->rear=newnode;
            this->front=newnode;
        }
        else{
            
            Node *curr=front;
            Node *tmp=NULL;
            while(curr!=NULL){
                
                if(curr->priority<priority){
                     newnode->next=curr;
                    if(tmp==NULL){
                        this->front=newnode;
                    }
                    else{
                        tmp->next=newnode;
                    }
                    break;
                }
                tmp=curr;
                curr=curr->next;
            }
            
            if(curr==NULL){
                this->rear->next=newnode;
                this->rear=newnode;
            }
        }
    }
    
    void dequeue(){
        if(this->front==NULL){
            cout<<"no element";
        }
        else{
            Node * temp=this->front;
            this->front=this->front->next;
            if(this->front==NULL){
                this->rear=NULL;
            }
            temp->next=NULL;
            delete(temp);
        }
    }
    
    int size(){
        int sizeq=0;
        Node *tmp=this->front;
        while(tmp!=NULL){
            sizeq++;
            tmp=tmp->next;
        }
        return sizeq;
    }
    
    
    
};

int main()
{
    

    return 0;
}
