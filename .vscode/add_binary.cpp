#include <iostream>
#include <string>
using namespace std;

string add_binary(string a, string b)
{
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;
    string result = "";

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
        {
            sum += a[i] - '0';
            i--;
        }

        if (j >= 0)
        {
            sum += b[j] - '0';
            j--;
        }

        result = char((sum % 2) + '0') + result;
        carry = sum / 2;
    }

    return result;
}

int main()
{
    string a = "1010";
    string b = "1011";

    cout << add_binary(a, b);
    return 0;
}
