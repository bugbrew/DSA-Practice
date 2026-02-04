// Fibbonacci
#include <iostream>
#include <cstring>
using namespace std;

class Solution{
public:
    int dp[31];

    int fib(int n){
        if(n<=1) return n;

        if(dp[n] != -1) return dp[n];
        
        return dp[n] = fib(n-1) + fib(n-2);
    }
    Solution(){
        memset(dp, -1, sizeof(dp));
    }

    // Recursive way
    // if (n <= 1)
        // return n;
    // return fib(n - 1) + fib(n - 2);
};

