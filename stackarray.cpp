#include <bits/stdc++.h>
#include <iostream>
#define MAX_SIZE 50
//stl
using namespace std;

class Stack{
    public:
    int arr[MAX_SIZE];
    int top;
    
    
    Stack(){
        this->top=-1;
    }
    
    void push(int data){
       
        
        if(this->top<MAX_SIZE-1){
             this->top=this->top+1;
             arr[this->top]=data;
        }
        else{
            cout<<"satck overflow \n";
        }
        
    }
    
    void pop(){
        if(this->top==-1){
            cout<<"stack underflow\n";
            return;
        }
        this->top=this->top-1;
    }
    
    int top_ele(){
        if(this->top!=-1)
        return arr[this->top];
    }
    
    int size(){
        return this->top+1;
    }
    
    bool empty(){
        if(this->top==-1){
            return true;
        }
        else
        return false;
    }
    
};
int main()
{
   
   Stack *st=new Stack();
    st->push(12);
    cout<<  st->top_ele()<<"\n";
    st->push(12);
    st->push(13);
    st->push(14);
    st->push(15);
    st->pop();
    st->push(78);
    cout<<st->size()<<"\n";
    st->pop();
    cout<<st->top_ele()<<"\n";
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    cout<<st->empty()<<"\n";
    return 0;
}







