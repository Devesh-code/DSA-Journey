class Solution {
public:
    bool isPerfectSquare(int num) {
        long int l = 1;
        long int r = num;
        long int  mid = 0;
        while (l <= r){
            mid = (l + r)/2;
            if (mid * mid > num){
                r = mid - 1;
            }
            else if(mid * mid < num){
                l = mid + 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};