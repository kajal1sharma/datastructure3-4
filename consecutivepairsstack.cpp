#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool checkconsecutivepairs(stack<int> s,int n){
    if(n%2!=0){
        s.pop();
    }
    
    while(!s.empty()){
        
        int data1=s.top();
        s.pop();
        if(!(data1-s.top()==1 ||data1-s.top()==-1 )){
            return false;
        }
        else{
            s.pop();
        }
    }
    
    return true;
}

int main()
{
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(4);
  s.push(5);
  s.push(6);
  s.push(7);
  s.push(9);
  int n=s.size();
  
  
  bool result=checkconsecutivepairs(s,n);
  
  if(result==true){
      cout<<"yes consecutive pairs exists";
  }
  else{
      cout<<"No consecutive pairs elements doesnt exist";
  }
  
    return 0;
}
