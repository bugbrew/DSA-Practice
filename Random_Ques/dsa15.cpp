#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string t;

    bool isAnagram(string s, string t){
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }

    return 0;
}