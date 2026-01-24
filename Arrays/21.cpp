// 154. Find Minimum in Rotated Sorted Array II
#include <iostream>
using namespace std;

int rotatedArray(int nums[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (nums[left] == nums[mid] && nums[mid] == nums[right])
        {
            left++;
            right--;
            continue;
        }
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
int main()
{
    int nums[] = {2, 2, 2, 0, 1};

    int n = sizeof(nums) / sizeof(nums[0]);

    cout << rotatedArray(nums, n);

    return 0;
}