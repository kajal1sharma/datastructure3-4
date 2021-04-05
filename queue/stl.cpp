#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int d=80;
    int c=90;
    int *a=&d;
    int *b=&c;
    queue<int *> q;
    
    q.push(a);
    q.push(b);
    q.pop();
    int *res=q.front();
    cout<<*res<<endl;
    cout<<q.size()<<endl;
    res=q.back();
    cout<<*res<<endl;
    
    cout<<q.empty();
    
    
    return 0;
}
