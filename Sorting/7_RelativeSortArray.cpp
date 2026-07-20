// 1122. Relative Sort Array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans;
    vector<bool> visited(arr1.size(), false);

    // Place elements according to arr2
    for (int i = 0; i < arr2.size(); i++) {
        for (int j = 0; j < arr1.size(); j++) {
            if (arr1[j] == arr2[i] && !visited[j]) {
                ans.push_back(arr1[j]);
                visited[j] = true;
            }
        }
    }

    // Collect remaining elements
    vector<int> remaining;
    for (int i = 0; i < arr1.size(); i++) {
        if (!visited[i]) {
            remaining.push_back(arr1[i]);
        }
    }

    // Sort remaining elements
    sort(remaining.begin(), remaining.end());

    // Append remaining elements
    for (int x : remaining) {
        ans.push_back(x);
    }

    return ans;
}

int main() {
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};

    vector<int> result = relativeSortArray(arr1, arr2);

    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}