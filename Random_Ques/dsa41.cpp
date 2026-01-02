#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;

        for (int i = 0; i < n - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue; // Skip duplicate i

            for (int j = i + 1; j < n - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue; // Skip duplicate j

                long long t = (long long)target - nums[i] - nums[j];
                int left = j + 1;
                int right = n - 1;

                while (left < right)
                {
                    long long sum = nums[left] + nums[right];

                    if (sum == t)
                    {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});

                        // Skip duplicates
                        while (left < right && nums[left] == nums[left + 1])
                            left++;
                        while (left < right && nums[right] == nums[right - 1])
                            right--;

                        left++;
                        right--;
                    }
                    else if (sum < t)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
            }
        }

        return result;
    }
};

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    Solution sol;
    vector<vector<int>> ans = sol.fourSum(nums, target);

    cout << "Quadruplets:\n";
    for (auto &q : ans)
    {
        cout << "[ ";
        for (int x : q)
            cout << x << " ";
        cout << "]\n";
    }

    return 0;
}
