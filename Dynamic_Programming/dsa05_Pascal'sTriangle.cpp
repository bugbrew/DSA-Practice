// Pascal's Triangle

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int rowIndex = 3;

    vector<vector<int>> prev;

    for(int i = 0; i <= rowIndex; i++){
        vector<int> row(i + 1, 1);

        for(int j=1; j < i; j++){
            row[j] = prev[i-1][j-1] + prev[i-1][j];
        }
        prev.push_back(row);
    }
    for (int i = 0; i < prev.size(); i++)
    {
        for (int j = 0; j < prev[i].size(); j++)
        {
            cout << prev[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}