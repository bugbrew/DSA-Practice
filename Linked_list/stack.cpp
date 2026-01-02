//Stack using Linked List

#include<iostream>
#include"stack.h"
using namespace std;

int main(){

    Stack<char> s;
    s.push('a');
    s.push('h');
    s.push('s');
    s.push('e');

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}