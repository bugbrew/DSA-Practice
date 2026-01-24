// 162. Find Peak Element
#include <iostream>
#include <vector>
using namespace std;

// Function to find peak element index
int findPeakElement(vector<int> &nums)
{
    int low = 0, high = nums.size() - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] < nums[mid + 1])
            low = mid + 1; // peak is on the right
        else
            high = mid; // peak is on the left or mid
    }

    return low; // low == high
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int peakIndex = findPeakElement(nums);

    cout << "Peak index: " << peakIndex << endl;
    cout << "Peak value: " << nums[peakIndex] << endl;

    return 0;
}
