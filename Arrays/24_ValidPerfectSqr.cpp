// 367. Valid Perfect Square
#include <iostream>
using namespace std;

bool isPerfectSquare(int num){
    if(num < 2){
        return true;
    }
    long long left = 0;
    int right = num;

    while(left <= right){
        long long mid = left + (right - left) / 2;
        long long sq = mid * mid;

        if(sq == num) return true;
        else if(sq < num) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}
int main(){
    int num = 4;
    cout << isPerfectSquare(num) << " ";
    return 0;
}