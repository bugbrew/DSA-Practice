// 905. Sort Array By Parity
#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParity(vector<int> &nums){
    int left = 0, right = nums.size() - 1;

    while (left < right){
        while (left < right && nums[left] % 2 == 0){
            left++;
        }
        
        while (left < right && nums[right] % 2 == 1){
            right--;
        }
        swap(nums[left], nums[right]);
    }
    return nums;
} 

int main(){
    vector<int> nums = {3, 1, 2, 4};

    vector<int> ans = sortArrayByParity(nums);

    for (int x : ans){
        cout << x << " ";
    }
    return 0;
}