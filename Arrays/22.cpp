// 47. Permutations II
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> ans;
vector<int> curr;
vector<bool> used;

void backtrack(vector<int> &nums){
    if (curr.size() == nums.size()){
        ans.push_back(curr);
        return;
    }

    for (int i = 0; i < nums.size(); i++){
        if (used[i])
            continue;

        if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
            continue;

        used[i] = true;
        curr.push_back(nums[i]);

        backtrack(nums);
        // backtrack
        curr.pop_back();
        used[i] = false;
    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());
    used.resize(n, false);

    backtrack(nums);

    cout << "\nUnique Permutations:\n";
    for (auto &v : ans)
    {
        for (int x : v)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
