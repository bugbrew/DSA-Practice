// Median of Two Sorted Arrays

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int nums1[] = {1,2};
    int nums2[] = {3,4};


    int m = sizeof(nums1) / sizeof(nums1[0]);
    int n = sizeof(nums2) / sizeof(nums2[0]);

    int totalSize = m + n;
    int result[totalSize];

    for(int i=0; i<m; i++){
        result[i] = nums1[i];
    }


    for(int j= 0; j<n; j++){
        result[m + j] = nums2[j];
    }

    sort(result, result + totalSize);

    for(int z = 0; z < totalSize; z++){
        // cout<< result[z] << " ";
    }

    double median;
    if(totalSize % 2 == 0){
        median = (result[totalSize / 2 -1] + result[totalSize / 2]) / 2.0;
    }
    else{
        median = result[totalSize / 2];
    }

    cout<< median << " ";

    return 0;
}