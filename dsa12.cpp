#include <iostream>
using namespace std;

int main(){
    int nums[] = {1, 2, 3, 1};
    int k = 3;

    int n= sizeof(nums) / sizeof(nums[0]);

    for(int i=0; i< n; i++){
        for(int j=i+1; j< n; j++){
            if(nums[i] == nums[j] && abs(i-j) <= k){
                cout << "true" <<endl;
                return 0;
            }
        }
    }
    cout<<"false" << endl;

    return 0;
}