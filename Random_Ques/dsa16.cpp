//Valid Palindrome

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "Banana";
    string ban = "";

    for(char c : s){
        if(isalnum(c)){
            ban += tolower(c);
        }
    }

    int i= 0;
    int j= s.size() - 1;
    while(i < j){
        if(ban[i] != ban[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}