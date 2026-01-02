#include <iostream>
using namespace std;

int main(){

    int nums[] = {1, 2, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
 
    int m = 2 * n;
    int ans[m];

    for(int j =0; j < m; j++){
        ans[j] = nums[j % n];
    }
    
    for (int j = 0; j < m; j++){
        cout << ans[j] << " ";
    }
    return 0;
}


// dsa30.cpp :-

// #include <iostream>
// #include <utility>
// using namespace std;
// 
// int main()
// {
    // int nums[] = {7, 4, 1, 5, 3};
    // int n = sizeof(nums) / sizeof(nums[0]);
// 
    // for (int i = 0; i < n - 1; i++)
    // {
        // int minIndex = i;
        // for (int j = i + 1; j < n; j++)
        // {
            // if (nums[j] < nums[minIndex])
            // {
                // minIndex = j;
            // }
        // }
        // swap(nums[i], nums[minIndex]);
    // }
    // for (int i = 0; i < n; i++)
    // {
        // cout << nums[i] << " ";
    // }
    // return 0;
// }