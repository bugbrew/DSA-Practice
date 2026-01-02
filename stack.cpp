#include<iostream>
#include<stack>
using namespace std;

int main(){

    // Creation of stack
    stack <int> s;


    // push operation
    s.push(2);
    s.push(5);
    s.push(3);

    // pop operation
    s.pop();

    cout<< "Printing top element: " <<s.top() <<endl;

    if(s.empty()){
        cout<< "The stack is empty" <<endl;
    }
    else{
        cout<< "\nThe stack is not empty" <<endl;
    }    

    return 0;
}