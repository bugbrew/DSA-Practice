//N_QUEEN = all ways problem

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

int solveNQueen(int n, int board[][20], int i){
    //base case
    if(i==n){
        //Print the board
        printBoard( n, board);
        cout<<endl;
        return 1;
    }

    //rec case
    //try to place a queen in every row
    int ways = 0;

    for(int j=0; j<n; j++){
        //whether the current i,j is safe or not
        if(canPlace(board,n,i,j)){
            board[i][j] = 1;  //putting the queen
            ways += solveNQueen(n, board, i+1);

            //backtrack
            board[i][j] = 0;  // removing the queen
        }
    }
    return ways;
}

int main(){
    //your code goes here
    int board[20][20] ={0};
    int n;
    cin>>n;

    cout<<"Ways: "<< solveNQueen(n, board, 0) <<endl;
    return 0;
}