#include <bits/stdc++.h>
//#include <queue.h>
#include <iostream>

using namespace std;

void print(queue<int> q){
    while(!q.empty()){
        int data=q.front();
        q.pop();
        cout<<data<<" ";
    }
    cout<<endl;
}
queue<int> reverse(queue<int> q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;
}
int main()
{
    
queue <int> q;
q.push(21);
q.push(24);
q.push(98);
q.push(97);
q.push(65);
print(q);
q=reverse(q);
print(q);
    return 0;
}
