#include<iostream>
using namespace std;

int main(){
    int nums[] = {0, 1, 0, 3, 12};
    int n = sizeof(nums)/sizeof(nums[0]);
    int left = 0;


    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[left], nums[i]);
            left++;
        }
    }

    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
