// 2946. Matrix Similarity After Cyclic Shifts
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool areSimilar(vector<vector<int>> &mat, int k)
    {
        int n = mat.size();
        int m = mat[0].size();

        for (int i = 0; i < n; i++)
        {
            vector<int> temp(m);

            for (int j = 0; j < m; j++)
            {
                if (i % 2 == 0)
                {
                    // left shift
                    temp[j] = mat[i][(j + k) % m];
                }
                else
                {
                    // right shift
                    temp[j] = mat[i][(j - k % m + m) % m];
                }
            }

            if (temp != mat[i])
                return false;
        }

        return true;
    }
};

int main()
{
    int n, m, k;

    cout << "Enter rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Enter k: ";
    cin >> k;

    Solution obj;
    bool result = obj.areSimilar(mat, k);

    if (result)
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}