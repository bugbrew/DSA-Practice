#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main(){
    string st = "abcabcbb";
    int n = sizeof(st);

    unordered_set <char> us;

    int maxlen = 0;
    int start = 0;

    for(int i=0; i<n; i++){
        while(us.count(st[i])){
            // us.erase(st.[start]);
            start++;
        }
        us.insert(st[i]);
        maxlen = max(maxlen, i- start + 1);
    }
    return 0;
}