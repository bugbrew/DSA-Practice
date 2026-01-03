//PERMUTATIONS
//Input- abc
//Output- abc, acb, bac, bca, cab, cba

#include<iostream>
using namespace std;

void permutation(string str, int l, int r){

    //base case
    if(l == r){
        cout<< str << endl;
    };

    //rec case
    for(int i = l; i <= r; i++){
        swap(str[l], str[i]);
        permutation(str, l+1, r);
        swap(str[l], str[i]);
    }
}

int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;

    permutation(input, 0, input.length() -1);
    return 0;
}