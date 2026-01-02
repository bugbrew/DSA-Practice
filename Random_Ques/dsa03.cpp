#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    int nums[] = {3,2,2,3};
    int n = sizeof(nums) / sizeof(nums[0]);

    int val = 3;

    stack <int> st;

    for(int i=0; i < n; i++){
        if(nums[i] != val){
            st.push(nums[i]);
        }
    }

    while(!st.empty()){
        cout<< st.top() << " ";
        st.pop();
    }

    cout<< endl;

    return 0;
}