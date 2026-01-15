// 645. Set Mismatch
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int s[] = {1, 2, 2, 4};
    int n = sizeof(s)/sizeof(s[0]);

    sort(s, s+n);

    int duplicate = -1, missing = -1;

    for(int i = 0; i< n-1; i++){
        if(s[i] == s[i + 1]){
            duplicate = s[i];
        }
        if(s[i + 1] != s[i] + 1){
            missing = s[i] + 1;
        }
    }
    if (s[n - 1] != n)
    {
        missing = n;
    }

    cout << "Duplicate: " << duplicate << ", Missing: " << missing << endl;

    return 0;
}