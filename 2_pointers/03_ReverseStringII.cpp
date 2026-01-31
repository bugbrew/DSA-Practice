// 541. Reverse String II
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseStr(string s, int k){
    int n = s.length();

    for(int i = 0; i < n; i += 2 * k){
        int left = i;
        int right = min(i + k - 1, n - 1);
        reverse(s.begin() + left, s.begin() + right + 1);
    }
    return s;
};

int main(){
    string s;
    int k;
    cin >> s >> k;
    cout << reverseStr(s, k);
    return 0;
}