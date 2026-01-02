#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "A man, a plan, a canal: Panama";

    string cleaned = "";
    for(char c : s){
        if(isalnum(c)){
            
        }
    }

    int length = 0;
    int n = sizeof(s);

    string m = s+s;

    for(int i=0; i<n; i++){
        for(int j=n-1 ; j<n; j++){
            if(s[i] == s[j]){
                cout << "palindrome" << endl;
            }
            else{
                cout << " not a palindrome" << endl;
            }
        }
    }
    return 0;
}