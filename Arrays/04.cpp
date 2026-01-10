// 485. Max Consecutive Ones
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int nums[] = {1, 1, 0, 1, 1, 1};
    int n = sizeof(nums)/ sizeof(nums[0]);

    int curr = 0;
    int maxCount = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] == 1){
            curr++;
            maxCount = max(maxCount, curr);
        }
        else{
            curr = 0;
        }
    }
    cout << maxCount << " "; 

    return 0;
}