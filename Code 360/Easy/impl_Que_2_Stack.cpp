#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack<int>stk1, stk2;
    public:
    bool enqueue(int X){
        stk1.push(X);
        return true;
    }
    int dequeue(){
        if(stk1.empty() && stk2.empty()){
            return -1; // underflow
        }
        if(stk2.empty()){
            while(!stk1.empty()){
                stk2.push(stk1.top());
                stk1.pop();
            }
        }
        int front = stk2.top();
        stk2.pop();
        return front;
    }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    
    cout << q.dequeue() << endl; // Output: 1
    cout << q.dequeue() << endl; // Output: 2
    q.enqueue(4);
    cout << q.dequeue() << endl; // Output: 3
    cout << q.dequeue() << endl; // Output: 4
    cout << q.dequeue() << endl; // Output: -1 (queue is empty)

    return 0;
 return 0;
 }