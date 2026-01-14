// 496. Next Greater Element I
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mp; // stores next greater of each element
        stack<int> st;

        // Traverse nums2
        for (int num : nums2)
        {
            while (!st.empty() && st.top() < num)
            {
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        // Remaining elements have no next greater
        while (!st.empty())
        {
            mp[st.top()] = -1;
            st.pop();
        }

        // Build result for nums1
        vector<int> ans;
        for (int num : nums1)
        {
            ans.push_back(mp[num]);
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> result = sol.nextGreaterElement(nums1, nums2);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}
