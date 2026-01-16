// 75. Sort Colors
#include <iostream>
using namespace std;

int main(){
    int nums[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(nums)/sizeof(nums[0]);

    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    for(int i = 0; i< n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}