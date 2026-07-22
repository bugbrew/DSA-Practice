// 38. Count and Say
#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n)
{
    string ans = "1";

    for (int i = 2; i <= n; i++)
    {
        string temp = "";
        int j = 0;

        while (j < ans.length())
        {
            int count = 1;

            while (j + 1 < ans.length() && ans[j] == ans[j + 1])
            {
                count++;
                j++;
            }

            temp += to_string(count);
            temp += ans[j];

            j++;
        }

        ans = temp;
    }

    return ans;
}

int main()
{
    int n = 5;
    cout << countAndSay(n);
}