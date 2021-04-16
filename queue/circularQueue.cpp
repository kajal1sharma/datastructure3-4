#include <iostream>

using namespace std;

class Stack{
    static const int maxsize=5;
    int arr[maxsize];
    int size=0;
    int front=-1;
    int rear=-1;
    
    public:
    
    void enqueue(int data){
        if(this->size==this->maxsize){
            cout<<"the stack is full\n";
          return;  
        }
        else{
            this->rear= (this->rear+1)%this->maxsize;
            this->arr[this->rear]=data;
            this->size++;
        }

    }
    
    void dequeue(){
        if(size==1){
            this->front=this->rear=-1;
            this->size--;
        }
        else if(this->size==0){
            cout<<"queue underflow";
        }
        else{
            this->front=(this->front+1)%this->maxsize;
            this->size--;
        }
    }
    
    int getsize(){
        return this->size;
    }
    
    void print(){
        for(int i=0;i<this->maxsize;i++){
            cout<<this->arr[i]<"  ";
        }
    }
};
int main()
{
  Stack *st=new Stack();
  st->enqueue(20);
  st->enqueue(30);
  st->enqueue(40);
  st->enqueue(50);
  st->enqueue(60);
  st->enqueue(70);
  st->dequeue();
  st->enqueue(70);
    return 0;
}
