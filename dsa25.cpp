#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a = "11";
    string b = "1";

    string res = "";

    int i = sizeof(a) - 1;
    int j = sizeof(b) - 1;
    int carry = 0;

    while(i >= 0 || j >= 0 || carry){
        int sum = carry;
        if(i >= 0){
            sum += a[i--] - '0';
        }
        if(j >= 0){
            sum += b[j--] - '0';
        }
        res += (sum % 2) + '0';
        carry = sum/2;
    }
    reverse(res.begin(), res.end());
    return 0;
}








// dsa33.cpp :-
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;
// 
// int main()
// {
    // int heights[] = {180, 165, 170};
    // string names[] = {"Mary", "John", "Emma"};
// 
    // int n = sizeof(heights) / sizeof(heights[0]);
// 
    // for (int i = 0; i < n; i++)
    // {
        // if (heights[i] > heights[i + 1])
        // {
            // for (int j = 0; j < n; j++)
            // {
                // cout << names[j] << endl;
            // }
        // }
    // }
    // return 0;
// }