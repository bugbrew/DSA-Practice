#include <iostream>
using namespace std;

int main(){
    int prices[] = {7, 1, 5, 3, 6, 4}; 
    int n = sizeof(prices)/ sizeof(prices[0]);

    int buy = prices[0];
    int sell = 0;
    int sellprice = 0;

    for(int i=1; i<n; i++){
        if(prices[i] < buy){
            buy = prices[i];
        }
        else if(prices[i] - buy > sell){
            sell = prices[i] - buy;
            sellprice = prices[i];
        }
    }

    cout << sell << buy << sellprice << endl;

    
    return 0;
}