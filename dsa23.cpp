#include<iostream>
using namespace std;

int main(){
    int num[] = {0, 1, 1};
    
    int n = sizeof(num) / sizeof(num[0]);

    int left = 0;
    int right = n - 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if (num[i] + num[j] + num[k] == 0){
                    cout << num[i] << num[j] << num[k] << endl;
                }
            }
        }
    }


    return 0;
}