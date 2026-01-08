//228. Summary Ranges
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int nums[] = {0, 1, 2, 4, 5, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    vector<string> result;

    for (int i = 0; i <= n; i++){
        int start = nums[i];

        while(i + 1 < n && nums[i + 1] == nums[i] + 1){
            i++;
        }

        int end = nums[i];

        if(start == end){
            result.push_back(to_string(start));
        }
        else{
            result.push_back(to_string(start) + "->" + to_string(end));
        }
    }

    for( auto s : result ){
        cout << s << endl;
    }

    cout << endl;

    return 0;
}