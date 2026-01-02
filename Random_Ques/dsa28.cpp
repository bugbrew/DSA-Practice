#include<iostream>
using namespace std;

int main(){
    int height[] = {1, 1};
    int n = sizeof(height) / sizeof(height[0]);

    int maxWater = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        { // j starts from i+1
            int minHeight = min(height[i], height[j]);
            int width = j - i;
            int area = minHeight * width;

            maxWater = max(maxWater, area);
        }
    }

    cout << "Max water: " << maxWater << endl;
    return 0;
}