// Remove Duplicates from Sorted Array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int flowerbed[] = {1,0,0,0,0,1};

    class Solution
    {
    public:
        bool canPlaceFlowers(vector<int> &flowerbed, int n){

            int size = flowerbed.size();
            for (int i = 0; i < size; i++)
            {
                if (flowerbed[i] == 0){
                    bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
                    bool emptyRight = (i == size - 1) ||(flowerbed[i + 1] == 0);
                    if(emptyLeft && emptyRight){
                        flowerbed[i] = 1;
                        n--;
                        if (n == 0){
                            return true;
                        }
                    }
                }
                return n <= 0;
            }
        }
    };
    return 0;
}