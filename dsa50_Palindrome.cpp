// 9. Palindrome Number
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x){
    if(x < 0) return false;

    string s = to_string(x);
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
    cout << isPalindrome(1210);

    return 0;
}