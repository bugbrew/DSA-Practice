#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> l1 = {2,4,3};
    vector <int> l2 = {5,6,4};

    int n = l1.size();
    int m = l2.size();

    for(int i=0; i< n/2 ; i++){
        swap(l1[i], l1[n-i-1]);
    }

    for(int j=0; j < m/2 ; j++){
        swap(l2[j], l2[ m -j-1]);
    }


    for(int i : l1){
        cout<< i << " ";
        // sum += i;
    }

    cout << endl;

    for(int j : l2){
        cout << j << " ";
    }

    cout<< endl;

    vector <int> result;
    int carry = 0;
    int i = 0;
    int j = 0;

    while(i < n || j < m || carry){
        int sum = carry;
        if(i < n){
            sum += l1[i];
            i++;
        }
        if(j < m){
            sum += l2[j];
            j++;
        }

        result.push_back(sum % 10);
        carry = sum / 10;
    }
    // int num1 = 0;
    // for(int digit : l1){
        // num1 = num1 * 10 + digit;
    // }

    // int num2 = 0;
    // for (int digit : l2){
        // num2 = num2 * 10 + digit;
    // }

    // int totalSum = num1 + num2;
    // 
    // cout << num1 << endl;
    // cout << num2 << endl;
    // cout << endl;
    // cout<< totalSum << endl;


    return 0; 
}
