// 81. Search in Rotated Sorted Array II
#include <iostream>
using namespace std;

bool rotatedArray(int nums[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return true;

        // If duplicates block decision
        if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            low++;
            high--;
        }
        // Left half sorted
        else if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half sorted
        else
        {
            if (nums[mid] < target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
}

int main()
{
    int nums[] = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << rotatedArray(nums, n, target);
    return 0;
}
