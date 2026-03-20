// 387. First Unique Character in a String
#include <iostream>
#include <vector>
using namespace std;

int firstUniqChar(string s)
{
    vector<int> count(26, 0);

    // Step 1: Count frequency
    for (char c : s)
    {
        count[c - 'a']++;
    }

    // Step 2: Find first unique character
    for (int i = 0; i < s.size(); i++)
    {
        if (count[s[i] - 'a'] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    int result = firstUniqChar(s);
    cout << "First unique character index: " << result << endl;

    return 0;
}