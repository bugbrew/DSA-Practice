//278. First Bad Version
#include <iostream>
using namespace std;

// Mock API (for testing)
int bad = 4; // suppose version 4 is first bad

bool isBadVersion(int version)
{
    return version >= bad;
}

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int low = 1;
        int high = n;

        while (low < high)
        {
            int mid = low + (high - low) / 2;

            if (isBadVersion(mid))
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main()
{
    Solution obj;
    int n = 10;

    cout << "First bad version: " << obj.firstBadVersion(n);
    return 0;
}