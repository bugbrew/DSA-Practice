#include<iostream>
using namespace std;


int main(){
    int arr[] = {2,1,4,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maxCount = 0;
    int maxElement = arr[0];

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;  
            }

            if(count > maxCount){
                maxCount = count;
                maxElement = arr[i];
            }
        }
        cout << maxCount << " ";
    }
    return 0;
}