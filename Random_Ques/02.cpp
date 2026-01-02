#include<iostream>
#include<unordered_map>
using namespace std;

int romanInteger(string s){
    unordered_map<char, int> roman={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int total = 0;
    for(int i=0; i < s.length(); i++){
        int current = roman[s[i]];
        int next = (i + 1 < s.length()) ? roman[s[i + 1]] : 0;

        if(i + 1 < s.length()){
            next = roman[s[i+1]];
        }
        
        if(next > current){
            total += (next - current);
            i++;
        }
        else{
            total +=current;
        }
    }
    return total;

}

int main(){
    string romanNumeral;
    cout << "Enter Roman numeral: ";
    cin >> romanNumeral;
    
    int result = romanInteger(romanNumeral);
    cout << "Integer value: " << result << endl;

    return 0;
}