// 744. Find Smallest Letter Greater Than Target
#include <vector>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int low = 0, high = letters.size() - 1;
        char ans = letters[0]; // default (wrap-around case)

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (letters[mid] > target)
            {
                ans = letters[mid]; // possible answer
                high = mid - 1;     // try to find smaller one
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};