#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int list1[] = {1, 2, 4};
    int list2[] = {1, 3, 4};

    int n1 = sizeof(list1) / sizeof(list1[0]);
    int n2 = sizeof(list2) / sizeof(list2[0]);

    int new_list[n1 + n2]; // destination array

    sort(list1, list1 + n1);
    sort(list2, list2 + n2);

    merge(list1, list1 + n1, list2, list2 + n1, new_list);

    for(int i = 0; i<n1 + n2; i++){
        cout << new_list[i] << " ";
    }
    cout << endl;
    return 0;
}