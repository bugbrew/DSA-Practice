// Intersection of 2 arrays
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};

    int n = sizeof(nums1) / sizeof(nums1[0]);
    int m = sizeof(nums2) / sizeof(nums2[0]);

    unordered_set<int> s(begin(nums1), end(nums1));
    unordered_set<int> result;

    for(int x : nums2){
        if(s.count(x)){
            result.insert(x);
        }
    }
    
    vector<int> ans(result.begin(), result.end());

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}