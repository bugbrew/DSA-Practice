// 905. Sort Array By Parity
#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;
    while(left < right){
        if(nums[left] % 2 > nums[right] % 2){
            swap(nums[left], nums[right]);
        }
        if(nums[left] % 2 == 0) left ++;
        if(nums[right] % 2 == 1) right--;
    }
    return nums;
}
int main(){
    vector<int> nums = {3, 1, 2, 4};
    vector<int> result = sortArrayByParity(nums);

    for(int i= 0; i < result.size(); i++){
        cout<< result[i] << endl;
    }
    return 0;
}