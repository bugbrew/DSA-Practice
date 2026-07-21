// 56. Merge Intervals
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{

    // Step 1: Sort intervals according to starting time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    // Put the first interval into the answer
    ans.push_back(intervals[0]);

    // Traverse the remaining intervals
    for (int i = 1; i < intervals.size(); i++)
    {

        // Last interval already present in the answer
        vector<int> &last = ans.back();

        // If intervals overlap
        if (intervals[i][0] <= last[1])
        {

            // Extend the ending point if needed
            last[1] = max(last[1], intervals[i][1]);
        }
        else
        {
            // No overlap, add the current interval
            ans.push_back(intervals[i]);
        }
    }

    return ans;
}

int main()
{

    vector<vector<int>> intervals = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}};

    vector<vector<int>> ans = mergeIntervals(intervals);

    cout << "Merged Intervals:\n";

    for (auto interval : ans)
    {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }

    return 0;
}