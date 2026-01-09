#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nums[] = {3, 0, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    sort(nums, nums + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] != nums[i] + 1)
        {
            cout << "Missing number is: " << nums[i] + 1;
            return 0;
        }
    }

    // If no number is missing in between
    cout << "Missing number is: " << n;
    return 0;
}
