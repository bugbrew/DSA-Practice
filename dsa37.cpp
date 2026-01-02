// 3Sum
#include<iostream>
using namespace std;

int main(){
    int nums[] = {-1, 0, 1, 2, -1, 4};
    int n = sizeof(nums)/ sizeof(nums[0]);

    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(nums[i] + nums[j] + nums[k] == 0 & i != j & i!= k & j != k){
                    cout << nums[i] << nums[j] << nums[k] << endl;
                }
            }
        }
    }
    return 0;
}