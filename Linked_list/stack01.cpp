//Stack using vector

#include<iostream>
#include"stackV.h"
using namespace std;

int main(){

    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(10);
    s.push(15);

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}