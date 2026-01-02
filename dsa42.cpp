#include<iostream>
using namespace std;

int main(){
    int nums[] = {5, 1, 5, 2, 5, 3, 5, 4};
    int n = sizeof(nums)/sizeof(nums[0]);

    for(int i = 0; i< n-1; i++){
        if(nums[i] == nums[i + 1] || (i + 2 < n && nums[i] == nums[i + 2])){
            cout << nums[i];
            return 0;
        }
    }
    return 0;
}