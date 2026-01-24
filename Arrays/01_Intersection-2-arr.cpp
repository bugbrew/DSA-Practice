// Intersection of 2 arrays
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};

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