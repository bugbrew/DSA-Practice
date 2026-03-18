// 171. Excel Sheet Column Number
#include <iostream>
using namespace std;

int titleToNumber(string columnTitle)
{
    int result = 0;

    for (char c : columnTitle)
    {
        result = result * 26 + (c - 'A' + 1);
    }

    return result;
}

int main()
{
    cout << titleToNumber("AB") << endl; // 28
    return 0;
}

// This is base conversion (base 26)
// Very similar to :
    // binary → decimal
    // decimal → base - n