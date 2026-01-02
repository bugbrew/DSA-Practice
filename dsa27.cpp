#include<iostream>
using namespace std;

int main(){
    int nums[] = {0, 1, 0, 3, 12};
    int left = 0;

    int n = sizeof(nums) / sizeof(nums[0]);
    for(int right =0; right < n; right++){
        if(nums[right] != 0){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
        }
        for(int i = 0; i < n; i++){
            cout << nums[i] << endl;
        }
        cout << endl;
    }
    return 0;
}





// dsa32.cpp :- 
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;
// 
// int main()
// {
    // int heights[] = {180, 165, 170};
    // string names[] = {"Mary", "John", "Emma"};
// 
    // int n = sizeof(heights) / sizeof(heights[0]);
// 
    // for (int i = 0; i < n; i++)
    // {
        // if (heights[i] > heights[i + 1])
        // {
            // for (int j = 0; j < n; j++)
            // {
                // cout << names[j] << endl;
            // }
        // }
    // }
    // return 0;
// }