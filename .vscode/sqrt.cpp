class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x/2;

        if(x == 0 || x == 1){
            return x;
        }

        while(start <= end){
            long mid = start + (end - start) / 2;

            if(mid * mid <= x && (mid + 1) * (mid + 1) > x){
                return mid;
            }
            else if(mid * mid < x){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
};