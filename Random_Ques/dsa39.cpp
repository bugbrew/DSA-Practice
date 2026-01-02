#include<iostream>
using namespace std;

int main(){
    int nums1[] = {4, 9, 5};
    int nums2[] = {9, 4, 9, 8, 4};

    int n = sizeof(nums1) / sizeof(nums1[0]);
    int m = sizeof(nums2) / sizeof(nums2[0]);

    bool used[m] = {false};

    for(int i = 0; i< n; i++){
        for(int j = 0; j< m; j++){
            if(nums1[i] == nums2[j] && !used[j]){
                cout << nums1[i] << endl;
                used[j] = true;
                break;
            }
        }
    }
    return 0;
}