// 1051. Height Checker#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> s = heights;
        sort(s.begin(), s.end());

        int count = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] != s[i])
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution obj;

    vector<int> heights = {1, 1, 4, 2, 1, 3};

    int result = obj.heightChecker(heights);
    cout << "Mismatch count: " << result << " ";

    return 0;
}