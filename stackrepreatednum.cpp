#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int a=674448;
  
  
  stack<int> st;
  
 
  while(a!=0){
      if(st.size()==0){
          st.push(a%10);
      }
      else if(st.top()!=a%10 ){
      st.push(a%10);
      }
      a=a/10;
  }
  
  int num=0;
  int i=10;
  while(!st.empty()){
      num=num*i+st.top();
      st.pop();
      //i=i*10;
      
  }
  
  cout<<num;
    return 0;
}
