// 455. Assign Cookies
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int g[] = {1, 2, 3};
    int s[] = {1, 1};

    int n = sizeof(g) / sizeof(g[0]);
    int m = sizeof(s) / sizeof(s[0]);

    sort(g, g + n);
    sort(s, s + m);

    int i = 0, j = 0;
    int count = 0;

    while (i < n && j < m){
        if (s[j] >= g[i]){
            count++;
            i++;
            j++;
        }
        else{
            j++; 
        }
    }

    cout << count;

    return 0;
}