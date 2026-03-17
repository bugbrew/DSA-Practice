// 374. Guess Number Higher or Lower
#include<iostream>
using namespace std;

int pick = 6; // hidden number (for testing)

int guess(int num)
{
    if (num == pick)
        return 0;
    else if (num > pick)
        return -1;
    else
        return 1;
}

int guessNumber(int n){
    int low = 1;
    int high = n;

    while(low <= high){
        int mid = low + (high - low) / 2;
        int res = guess(mid);

        if (res == 0)
        {
            return mid;
        }
        else if (res == -1)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
};
int main(){
    cout << guessNumber(10);
    return 0;
}