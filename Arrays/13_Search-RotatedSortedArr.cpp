// 33. Search in Rotated Sorted Array

#include <iostream>
using namespace std;

int main(){
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(nums)/sizeof(nums[0]);
    int target = 0;

    int left = 0, right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(nums[mid] == target){
            cout << mid << endl;
            return 0;
        }
        // Left half
        if(nums[left] <= nums[mid]){
            if(target >= nums[left] && target < nums[mid]){
                right = mid - 1;
            }
            else{
                left = mid + 1; 
            }
        }
        else{
            if (target > nums[mid] && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    cout << -1 << endl;
    return 0;
}