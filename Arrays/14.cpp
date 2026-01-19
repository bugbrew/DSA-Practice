// 34. Find First and Last Position of Element in Sorted Array
#include <iostream>
using namespace std;

int findFirst(int nums[], int n, int target)
{
    int left = 0, right = n - 1;
    int first = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            right = mid - 1; // move left
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return first;
}

int findLast(int nums[], int n, int target)
{
    int left = 0, right = n - 1;
    int last = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            left = mid + 1; // move right
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return last;
}

int main()
{
    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << findFirst(nums, n, target) << " ";
    cout << findLast(nums, n, target) << endl;

    return 0;
}
