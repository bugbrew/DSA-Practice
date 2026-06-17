// 977. Squares of a Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> temp = nums;

        for (int i = 0; i < nums.size(); i++)
        {
            temp[i] = nums[i] * nums[i];
        }
        sort(temp.begin(), temp.end());
        return temp;
    }
};

int main(){
    Solution sol;

    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> result = sol.sortedSquares(nums);

    cout << "Sorted Squares: ";
    for (int num : result){
        cout << num << " ";
    }

    return 0;
}