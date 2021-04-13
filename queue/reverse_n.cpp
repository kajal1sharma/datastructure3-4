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
    if(!q.empty()){
        return q;
    }
    int d=q.front();
    q.pop();
    q=reverse(q);
    q.push(d);
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
cout<<endl;
queue<int> q2;
int i=3;
while(i!=0){
    q2.push(q.front());
    q.pop();
    i--;
}
q2=reverse(q2);
print(q2);
// while(!q.empty()){
//   q2.push(q.front());
//   q.pop();
// }
//  print(q2);
    return 0;
}
