// 747. Largest Number At Least Twice of Others
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dominantIndex(vector<int>& nums){

    vector<int> temp = nums;
    sort(temp.begin(), temp.end(), greater<int>());

    if(temp[0] >= 2 * temp[1]){
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == temp[0]){
                return i;
            }
        }
    }
    return -1;

}

int main(){
    vector<int> nums = {3, 6, 1, 0};

    cout << dominantIndex(nums) << endl;

    return 0;

}