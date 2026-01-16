// 79. Word Search
#include <iostream>
using namespace std;

int main(){
    char board[3][4] = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}