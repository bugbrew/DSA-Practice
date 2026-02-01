// 821. Shortest Distance to a Character
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> shortestToChar(string s, char c){
    int n = s.length();
    vector<int> answer(n);

    // for left -> right
    int prev = -1e9; // acts as -infinity
    for(int i = 0; i< n; i++){
        if(s[i] == c){
            prev = i;
        }
        answer[i] = i - prev;
    }

    prev = 1e9; // acts as +infinity
    for (int i = n - 1; i >= 0; i++){
        if (s[i] == c){
            prev = i;
        }
        answer[i] = min(answer[i], prev - i);
    }
    return answer;
};

int main(){
    string s;
    char c;

    cin >> s >> c;

    vector<int> result = shortestToChar(s, c);

    for(int x : result){
        cout << x << " ";
    }
    return 0;
}