// 41. First Missing Positive
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int missing = 1;

    for (int i = 0; i < nums.size(); i++) {
        // Ignore negatives, zero, and smaller duplicates
        if (nums[i] < missing) {
            continue;
        }

        // If found current missing number, look for next
        if (nums[i] == missing) {
            missing++;
        }

        // If gap found
        else if (nums[i] > missing) {
            return missing;
        }
    }

    return missing;
}

int main() {
    vector<int> nums = {3, 4, -1, 1};

    cout << "First Missing Positive: " << firstMissingPositive(nums) << endl;

    return 0;
}