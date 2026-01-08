// Pascal's Triangle II
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rowIndex = 3;

    vector<int> prev;

    for (int i = 0; i <= rowIndex; i++){
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++){
            row[j] = prev[j - 1] + prev[j];
        }
        prev = row;
    }
    for(int x : prev){
        cout << x << " ";
    }
    return 0;
}