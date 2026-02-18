// 557. Reverse Words in a String III
#include<iostream>
#include<string>
using namespace std;

string reverseString(string s){
    int n = s.length();
    int start = 0;

    for(int i = 0; i<= n; i++){

        if(i == n || s[i] == ' '){
            int left = start;
            int right= i - 1;

            while(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            start = i + 1;
        }
    }
    return s;

}
int main(){
    string s = "Let's code";
    cout<< reverseString(s);

    return 0;
}