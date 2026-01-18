// 39. Combination Sum
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> ans;
vector<int> current;

void backtrack(vector<int>& candidates, int target, int index){
    // Base Case
    if(target == 0){
        ans.push_back(current);
    }
    if(target < 0) return;

    for(int i = index; i< candidates.size(); i++){
        current.push_back(candidates[i]);
        backtrack(candidates, target- candidates[i], i);
        current.pop_back();  // backtrack
    }

}

int main(){
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    
    backtrack(candidates, target, 0);

    for(auto &comb : ans){
        for(int num : comb){
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}