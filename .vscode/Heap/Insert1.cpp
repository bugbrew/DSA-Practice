#include<iostream>
#include<queue>
// #include"heap.h"
using namespace std;


class Compare{
public: 
    bool operator()(int a, int b){
        return a > b;
    }
};

// instead of this custom compare class we made we could have just written greater<int> in place of Compare

int main(){
    int arr[] = {10,15,20,13,6,90};
    int n = sizeof(arr)/sizeof(int);

    priority_queue<int, vector<int> , Compare > heap;
    for(int x : arr){
        heap.push(x);
    }

    while(!heap.empty()){
        cout << heap.top() << endl;
        heap.pop();
    }
    return 0;
}