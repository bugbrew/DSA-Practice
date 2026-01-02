//Grid Paths
//given a m*n grid, find the no. of ways to reach the bottom right corner starting from top left. at each cell you can move right or down.
//input 2d matrix
//output no. of ways

#include<iostream>
using namespace std;

int gridWays(int i, int j, int m, int n){
    if(i==m-1 and j==n-1){
        return 1;
    }

    if(j>=n or i>=m){
        return 0;
    }
    int ans = gridWays(i+1, j, m, n) + gridWays(i, j+1, m, n);
    return ans;
}

int main(){
    int m,n;
    cin>>m>>n;

    cout<< gridWays(0, 0, m, n); 
    return 0;
}