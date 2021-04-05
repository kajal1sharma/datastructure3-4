#include <iostream>
using namespace std;

//linked list queue

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
} ;

//insertion at the end  
class Queue{
    private:
    Node *front=NULL;
    Node *rear=NULL;
    int size=0;
    
    public:
    void enqueue(int data){
        Node *temp=new Node(data);
        if(this->front==NULL){
            this->front=this->rear=temp;
            this->size++;
        }
        else{
            Node *current=this->front;
            while(current->next!=NULL){
                current=current->next;
            }
            
            current->next=temp;
            this->size++;
            this->rear=temp;
        }
    }
    
   void dequeue(){
       if(this->front==NULL){
           cout<<"queue is empty";
           return;
       }
       
       Node* temp=this->front;
       this->front=this->front->next;
       if(this->front==NULL){
           this->rear=NULL;
       }
       temp->next=NULL;
       delete(temp);
       this->size--;
   }
    
    int sizeq(){
        return this->size;
    }
    
    bool empty(){
        if(this->front==NULL){//if(this->size()==0)
            return true;
        }
        return false;
    }
    
    int fronte(){
        if(this->front==NULL){
            return -1;
        }
        else{
            return this->front->data;
        }
    }
    
    int reare(){
        if(this->rear==NULL)
        return -1;
        else{
            return this->rear->data;
        }
    }
    
    void print(){
        while(this->empty()==false){
            int data=this->fronte();
            cout<<data<<" ";
            this->dequeue();
        }
        
      //  cout<<this->fronte();
    }
};


int main()
{
  Queue *q=new Queue();
  q->enqueue(10);
  q->enqueue(20);
  q->enqueue(30);
  q->enqueue(40);
  cout<<q->fronte()<<endl;
  cout<<q->reare()<<endl;
  q->dequeue();
  q->enqueue(50);
  cout<<q->fronte()<<endl;
  cout<<q->reare()<<endl;
  cout<<q->sizeq()<<endl;
  cout<<q->empty()<<endl;
  cout<<q->sizeq()<<endl;
  q->print();
    
    
    return 0;
}
