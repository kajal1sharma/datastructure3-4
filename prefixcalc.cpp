#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
 
 string s="231*+9-";
 
 stack<int> st;
 int i=0;
 
 while(s[i]!='\0'){
    if(s[i]<='9' && s[i]>='0' ){
        st.push(s[i]-48);
       // cout<<st.top()<<"\n";
    }    
    
    else {
      //  cout<<st.top()<<"\n";
        int operand1=st.top();
        st.pop();
        int operand2=st.top();
        st.pop();
        switch(s[i]){
            case '+':st.push(operand2+operand1);
                        break;
            case '-':st.push(operand2-operand1);
                        break;
            case '*':st.push(operand2*operand1);
                        break;
            case '/':st.push(operand2/operand1);
                        break;
            case '%':st.push(operand2%operand1);
                        break;
            default:break;
        }
    }
    i++;
 }
 
 int result=st.top();
 cout<<result;
    return 0;
}
