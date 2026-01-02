// 2 sum
#include<iostream>
using namespace std;

int main(){
    int nums[] = {3, 2, 4};
    int target = 6;
    int n = sizeof(nums)/sizeof(nums[0]);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                cout<< i << j << endl;
            }
        }
    }
    return 0;
}