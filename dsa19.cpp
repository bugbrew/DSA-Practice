#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <string> s = {"h", "e", "l", "l", "o"};

    int n = s.size ();

    for(int i = 0; i< n/2; i++){
        swap(s[i], s[n - i - 1]);
    }

    for(const string& str : s){
        cout << str << endl;
    }
    return 0;
}