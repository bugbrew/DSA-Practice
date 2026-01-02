#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "Hello World";
    int length = 0;
    int i = sizeof(s) - 1; 

    while(i >= 0 && s[i] == ' '){
        i--;
    }

    while(i >= 0 && s[i] != ' '){
        length++;
        i--;
    }
    cout<< length<< " ";



    return 0;
}