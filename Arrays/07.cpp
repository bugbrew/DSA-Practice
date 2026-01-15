// // 628. Maximum Product of Three Numbers
// #include<iostream>
// #include <climits> // For INT_MIN
// using namespace std;

// int main(){
//     int nums[] = {1, 2, 3, 4, 3};
//     int n = sizeof(nums)/sizeof(nums[0]);

//     int maxProduct = INT_MIN; // // Initialize to minimum possible value

//     for(int i = 0; i< n-2; i++){
//         for(int j = i + 1; j< n-1; j++){
//             for(int k = j + 1; k < n; k++){
//                 int product = nums[i] * nums[j] * nums[k];
//                 if(product > maxProduct){
//                     maxProduct = product;
//                 }
//             }
//         }
//     }
//     cout << "Maximum product of three numbers is: " << maxProduct << endl;
//     return 0;
// }

// 628. Maximum Product of Three Numbers- Using sort
#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

    sort(nums, nums + n);

    int maxProduct = max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);

    cout << "Maximum product of three numbers is: " << maxProduct << endl;

    return 0;
}
