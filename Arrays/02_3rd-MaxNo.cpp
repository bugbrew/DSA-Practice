// 414. Third Maximum Number
#include <iostream>
#include <set>
using namespace std;

int main(){
    int nums[] = {3, 2, 2, 5, 8};
    int n = sizeof(nums) / sizeof(nums[0]);
    set <int> s(begin(nums), end(nums));

    if (s.size() < 3){
        cout << *s.rbegin(); 
        return 0;
    }

    auto it = s.end();
    it--;
    it--;
    it--;

    cout << *it;

    return 0;
}