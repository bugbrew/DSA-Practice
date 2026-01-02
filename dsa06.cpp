#include<iostream>
#include<vector>
using namespace std;

int main(){
    int nums[] = {4, 1, 2, 1, 2};

    int result = 0;
    for(int num : nums){
        result ^= num;
    }
    cout<< result<<" ";

    return 0;
}