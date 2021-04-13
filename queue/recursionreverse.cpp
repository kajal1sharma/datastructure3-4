#include <bits/stdc++.h>
//#include <queue.h>
#include <iostream>

using namespace std;

void print(queue<int> q){
    
    if(q.empty()){
        return;
    }
    cout<<q.front()<<" ";
    q.pop();
    print(q);
}
queue<int> reverse(queue<int> q){
    
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
// q=reverse(q);
// print(q);
    return 0;
}
