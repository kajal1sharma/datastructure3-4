
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

class Stack{

public :

Node *head;
int size;

Stack(){
    this->size=0;
    this->head=NULL;
}
  
  void push(int data){
      Node* temp=new Node(data);
      
      if(this->head==NULL){
          this->head=temp;
          this->size++;
      }
      else{
          temp->next=this->head;
          this->head=temp;
          this->size++;
      }
  }
  
  void pop(){
      if(this->head==NULL){
          cout<<"stack is empty";
      }
      else{
          Node *temp=this->head;
          this->head=this->head->next;
          temp->next=NULL;
          delete(temp);
          this->size--;
      }
  }
  
  int size_stack(){
      
      return this->size;
      
  }
  
  bool empty(){
      if(this->head==NULL){
          return true;
      }
      return false;
  }
  
  int top(){
      return this->head==NULL?-1:this->head->data;
  }
    
};


int main()
{
    Stack *s=new Stack();
    s->push(20);
    s->pop();
    s->push(12);
    
    s->pop();
    cout<<s->top()<<"\n";
    cout<<s->empty()<<"\n";
    cout<<s->size_stack()<<" \n";
    return 0;
}
