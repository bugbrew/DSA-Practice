// 441. Arranging Coins
#include <iostream>
using namespace std;

int arrangeCoins(int n)
{
    int row = 1;
    int count = 0;

    while (n >= row)
    {
        n -= row;
        count++;
        row++;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << arrangeCoins(n) << endl;
    return 0;
}
