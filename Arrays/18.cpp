//  First Bad Version
#include <iostream>
using namespace std;

// Mock API for testing
bool isBadVersion(int version){
    return version >= 4;
}

int firstBadVersion(int n){
    int low = 1, high = n;

    while (low < high){
        int mid = low + (high - low) / 2;

        if (isBadVersion(mid)){
            high = mid; // move left
        }
        else{
            low = mid + 1; // move right
        }
    }
    return low;
}

int main(){
    int n = 5;
    cout << firstBadVersion(n);
    return 0;
}