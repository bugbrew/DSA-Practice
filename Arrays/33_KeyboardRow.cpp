// 500. Keyboard Row
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        vector<string> ans;

        for (string word : words)
        {
            string lowerWord = word;

            for (char &ch : lowerWord)
            {
                ch = tolower(ch);
            }

            string row;

            if (row1.find(lowerWord[0]) != string::npos)
            {
                row = row1;
            }
            else if (row2.find(lowerWord[0]) != string::npos)
            {
                row = row2;
            }
            else
            {
                row = row3;
            }

            bool valid = true;

            for (char ch : lowerWord)
            {
                if (row.find(ch) == string::npos)
                {
                    valid = false;
                    break;
                }
            }

            if (valid)
            {
                ans.push_back(word);
            }
        }

        return ans;
    }
};

int main()
{
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};

    Solution obj;
    vector<string> result = obj.findWords(words);

    cout << "Output: ";

    for (string word : result)
    {
        cout << word << " ";
    }

    return 0;
}