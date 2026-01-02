//N_QUEEN - palcing N chess queens on N*N chessboards so that no 2 queens attack each other (1 configuration only)
//Input: N=4
//Output: 2D Matrix with Queens

#include<iostream>
using namespace std;

bool canPlace(int board[][20], int n, int x, int y){

    //Column
    for(int k=0; k<x; k++){
        if(board[k][y] == 1){
            return false; // There's a queen in the same column
        }
    }
    //Left diagonal
    int i = x;
    int j = y;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false; // Queen found on left diagonal
        }
        i--; j--;
    }
    //Right Diagonal
    i = x;
    j = y;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false; // Queen found on right diagonal
        }
        i--; j++;
    }
    return true;
}

void printBoard(int n, int board[][20]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool solveNQueen(int n, int board[][20], int i){
    //base case
    if(i==n){
        //Print the board
        printBoard(n, board);
        return true;
    }

    //rec case
    //try to place a queen in every row
    for(int j=0; j<n; j++){
        //whether the current i,j is safe or not
        if(canPlace(board,n,i,j)){
            board[i][j] = 1;  //putting the queen
            bool success = solveNQueen(n,board,i+1);
            if(success){
                return true;
            }
            //backtrack
            board[i][j] = 0;  // removing the queen
        }
    }
    return false;
}

int main(){
    //your code goes here
    int board[20][20] ={0};
    int n;
    cin>>n;

    solveNQueen(n, board, 0);
    return 0;
}