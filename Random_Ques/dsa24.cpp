#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int head[] = {1, 1, 2};
    int n = sizeof(head) / sizeof(head[0]);

    sort(head, head + n);

    for(int i = 0; i < n; i++){
        if(i == 0 || head[i - 1] != head[i]){
            cout << head[i] << endl;
        }
    }
    return 0;
}