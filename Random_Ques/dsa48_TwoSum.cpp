// 1. Two Sum
#include<iostream>
using namespace std;

pair<int, int> twoSum(int nums[], int n, int target){

    for(int i = 0; i< n-1; i++){
        for(int j = i+1; j < n;  j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
        }
    }
    return {-1, -1};
};

int main(){
    int nums[] = { 3, 2, 4};
    pair<int, int> ans = twoSum(nums, 3, 6);
    cout << ans.first << "," << ans.second;
    return 0;
}