#include<iostream>
using  namespace std;

int main(){
    int nums[] = {3,3,0,99,-40};
    int n = sizeof(nums) / sizeof(nums[0]);
    int pointer = nums[0];

    for(int i = 0; i < n-1; i++){
        if(nums[i] > pointer){
            pointer = nums[i];
        }
    }
    cout << pointer << endl;
    return 0;
}