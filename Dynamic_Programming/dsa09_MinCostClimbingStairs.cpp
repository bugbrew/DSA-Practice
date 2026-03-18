// 746. Min Cost Climbing Stairs
#include <iostream>
#include <vector>
using namespace std;

int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();

    // Base cases: minimum cost to reach step 0 or 1 is 0
    int prev2 = 0; // dp[i-2]
    int prev1 = 0; // dp[i-1]

    for (int i = 2; i <= n; i++)
    {
        // Cost to reach step i
        int curr = min(prev1 + cost[i - 1], prev2 + cost[i - 2]);
        // Shift window
        prev2 = prev1;
        prev1 = curr;
    }

    // Minimum cost to reach top (step n)
    return prev1;
}

int main()
{
    // Example input
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};

    int result = minCostClimbingStairs(cost);
    cout << "Minimum cost to reach top: " << result << endl;

    return 0;
}