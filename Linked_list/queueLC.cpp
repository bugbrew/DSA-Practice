#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class MyStack {
private:
        queue<int> q1, q2;

public:
    MyStack(){

    }
    void push(int x) {
        if(!q1.empty()){
            q1.push(x);
        }
        else{
            q2.push(x);
        }
    }
    
    int pop() {
        if(q1.empty()){
            //Shift the element from q2 to q1
            while(!q2.empty()){
                int front = q2.front();
                q2.pop();
                if(q2.empty()){
                    break;
                }
                q1.push(front);
            }
        }
        else{
            //Shift the element from q1 to q2
            while(!q1.empty()){
                int front = q1.front();
                q1.pop();
                if(q1.empty()){
                    break;
                }
                q2.push(front);
            }
        }
        return q2.front() + 1;
    }
    
    int top() {
        if(q1.empty()){
            //Shift the element from q2 to q1
            while(!q2.empty()){
                int front = q2.front();
                q2.pop();
                q1.push(front);
                if(q2.empty()){
                    return front;
                }
            }
        }
        else{
            while(!q1.empty()){
                int front = q1.front();
                q2.push(front);
                q1.pop();
                if(q1.empty()){
                    //top element of the stack
                    return front;
                }
            }
        }
        return -1;
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};



/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */