   // 2->8->6->16->4->100->90
#include <iostream>

using namespace std;

//rear=>0th index

class Queue{
    private:
    int arr[50];
    int rear=-1;
    int front=-1;
    int size=0;
    
    public:
    void enqueue(int data){
        if(this->size==50){
            cout<<"overflow";
            return;
        }
        
        if(this->rear==-1){
            this->arr[0]=data;
            this->rear++;
            
        }
        else{
            for(int i=this->size-1;i>=0;i++){
                this->arr[i+1]=this->arr[i];
            }
            this->arr[0]=data;
        }
        this->front++;
        this->size++;
    }
    
    void dequeue(){
        if(this->front==-1){
            cout<<"underflow";
            return;
        }
        else{
            this->front--;
            this->size--;
            if(this->front==-1){
                this->rear=-1;
            }
        }
    }
    
    int rearele(){
        if(this->rear==-1){
            return -1;
        }
        else{
            return this->arr[this->rear];
        }
    }
    
    int  frontele(){
        if(this->front=-1){
            return -1;
            
        }
        else{
            return this->arr[this->front];
        }
    }
    int sizeq(){
        return this->size;
    }
    
    bool empty(){
        if(this->size==0){
            return true;
        }
        else{
            return false;
        }
    }
    
};

int main()
{
    
Queue *q=new Queue();
q->enqueue(12);
q->enqueue(14);

//cout<<q->frontele();
//cout<<q->rearele();
    return 0;
}
