#include<iostream>
using namespace std;

int main(){
    int nums[] = {3, 2, 3};

    int n = sizeof(nums) / sizeof(nums[0]);

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j< n; j++){
            if(nums[j] == nums[i]){
                count++;
            }
        }
        if(count > n/2){
            cout << nums[i] <<" ";
            break;
        }
    }
    return 0;
}