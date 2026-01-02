#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "234Adas";
    int n = s.size();
    for(char c : s){
        if(n >= 3){
            if(isalpha(c)){
                cout << s << endl;
            }
        }
    }
    return 0;
}