// 153. Find Minimum in Rotated Sorted Array
#include<iostream>
#include<algorithm>
using namespace std;

int rotatedArray(int nums[], int n){
    int left = 0;
    int right = n - 1;

    while(left < right){
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[right])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return nums[left];
}
int main(){
    int nums[] = {4, 5, 6, 7, 0, 1, 2};

    int n = sizeof(nums)/sizeof(nums[0]);

    cout << rotatedArray(nums, n);

    return 0;
}