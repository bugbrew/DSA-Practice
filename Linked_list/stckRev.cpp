//Reverse the stack

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<string> &books, string data){
    if(books.empty()){
        books.push(data);
        return;
    }
    string temp = books.top();
    books.pop();

    insertAtBottom(books,data);
    books.push(temp);
}

void reverse(stack<string> &books){
    if(books.empty()){
        return;
    }

    string t = books.top();
    books.pop();
    reverse(books);
    insertAtBottom(books,t);
}

int main(){

    stack<string> books;

    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("Ruby");
    books.push("OS");

    reverse(books);

    while(!books.empty()){
        cout<< books.top()<<endl;
        books.pop();
    }
    return 0;
}