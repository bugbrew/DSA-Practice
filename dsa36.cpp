// 2 sum- II - Input Array Is Sorted
#include <iostream>
using namespace std;

int main()
{
    int nums[] = {2, 3, 4};
    int target = 6;
    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << i+1 << j+1 << endl;
            }
        }
    }
    return 0;
}