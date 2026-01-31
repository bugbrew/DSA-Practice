// 392. Is Subsequence
#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t){
    int i = 0, j = 0;

    while(i < s.length() && j < t.length()){
        if(s[i] == t[j]){
            i++;
        }
        j++;
    }
    return i == s.length();
};

int main(){
    string s, t;

    cin >> s;
    cin >> t;

    cout << isSubsequence(s, t) << endl;
    return 0;
}