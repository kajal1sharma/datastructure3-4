#include <iostream>
#include <queue>
using namespace std;


int main()
{
    //priority queue
    priority_queue<int> p;
    p.push(100);
    p.push(20);
    p.push(90);
    p.push(77);
    p.push(890);
    
    //cout<<p.top();
    p.pop();
    //cout<<p.top();
    cout<<p.size();
    return 0;
}
