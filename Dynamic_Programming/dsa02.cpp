// Climbing Stairs
#include<iostream>
using namespace std;

int steps(int n){

    if(n <= 2){
        cout << n << endl;
    }
    else{
        int way1 = 1;
        int way2 = 2;

        for(int i = 3; i <= n; i++){
            int curr = way1 + way2;
            way1= way2;
            way2 = curr;
        }
        cout << way2 << endl;
    }
}

int main(){
    int n = 6;
    steps(n);

    return 0;
}