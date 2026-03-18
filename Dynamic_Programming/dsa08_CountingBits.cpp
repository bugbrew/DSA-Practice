// 338. Counting Bits
#include <iostream>
#include <vector>
using namespace std;

vector<int> countBits(int n){
    vector<int> ans;
    for(int i = 0; i<= n; i++){
        int count = 0;
        int num = i;

        while(num > 0){
            if(num % 2 == 1){
                count ++;
            }
            num /= 2;
        }
        ans.push_back(count);
    }
    return ans;
};
int main(){
    int n;
    cin>> n;

    vector<int> result = countBits(n);

    cout<< "Output: ";
    for(int x : result){
        cout << x << " ";
    }
    return 0;
}