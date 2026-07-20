// 1200. Minimum Absolute Difference

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int> &arr)
{
    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;

    // Step 2: Find the minimum adjacent difference
    for (int i = 1; i < arr.size(); i++)
    {
        minDiff = min(minDiff, arr[i] - arr[i - 1]);
    }

    vector<vector<int>> ans;

    // Step 3: Store all pairs with minimum difference
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] == minDiff)
        {
            ans.push_back({arr[i - 1], arr[i]});
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {4, 2, 1, 3};

    vector<vector<int>> ans = minimumAbsDifference(arr);

    cout << "Pairs with minimum absolute difference:\n";

    for (auto pair : ans)
    {
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";
    }

    return 0;
}