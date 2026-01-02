//Challenge: Insert at stack bottom

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<string> &books, string data){

    //base case
    if(books.empty()){
        books.push(data);
        return;
    }
    //rec case
    string temp = books.top();
    books.pop();

    insertAtBottom(books,data);
    books.push(temp);
}


int main(){

    stack<string> books;

    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("Ruby");
    books.push("OS");
    insertAtBottom(books,"C");

    while(!books.empty()){
        cout<< books.top()<<endl;
        books.pop();
    }
    return 0;
}