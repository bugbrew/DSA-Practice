// 125. Valid Palindrome
#include<iostream>
using namespace std;

bool isPalindrome(string s){
    string length = "";

    for(char c : s){
        if(isalnum(c)){
            length += tolower(c); 
        }
    }

    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
};
int main(){
    string s = "aba";
    cout << isPalindrome(s) << endl;
    return 0;
}
