#include <bits/stdc++.h>
#include <iostream>
//stl
using namespace std;


void printstack(stack<int> s){
    
    while(!s.empty()){
        int d=s.top();
        cout<<d<<"\n";
        
        s.pop();
        
    }
    cout<<"the stack has been traversed";
}
int main()
{
   stack<int >  st;
   
   
   //push pop top empty  size
   
   st.push(23);
   st.push(45);
   st.push(67);
   st.push(90);
   st.push(34);
   st.push(445);
   st.pop(); //no element is returnedd   but one element will be removed from top
//   cout<<st.top()<<"\n";// element will not be popped out
   
//   cout<<st.size();
   
  printstack(st);
   cout<<st.top();
    return 0;
}
