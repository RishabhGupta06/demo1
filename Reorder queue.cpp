#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    int i =0;
    int k =q.size()/2;
    while(i< k){
        s.push(q.front());
        i++;
        q.pop();
    }
    while (s.size()>0)
    {
        q.push(s.top());
        s.pop();
    }
    i =0;
    while(i< k){
        s.push(q.front());
        i++;
        q.pop();
    }
    
    for (int i = 0; i < k; i++)
    {
        q.push(s.top());
        q.push(q.front());
        q.pop();
        s.pop();
    }
    while (q.size()>0)
    {
        s.push(q.front());
        q.pop();
    }
    while (s.size()>0)
    {
        q.push(s.top());
        s.pop();
    }
    while (q.size()>0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    
}