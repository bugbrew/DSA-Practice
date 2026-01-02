#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s = "PAYPALISHIRING";
    int numRows = 3;
    int n = sizeof(s)/ sizeof(s[0]);

    if(numRows == 1 || numRows >= s.length()){
        cout<<s<<endl;
    }

    vector<string> rows(numRows);
    int currentRow = 0;
    bool goingDown = false;

    for(char c : s){
        rows[currentRow] += c;

        if(currentRow == 0 || currentRow == numRows - 1){
            goingDown = !goingDown;
            currentRow += goingDown ? 1 : -1;
        }
    }

    string result;
    for(string row : rows){
        result += row;
    }

    return 0;
}