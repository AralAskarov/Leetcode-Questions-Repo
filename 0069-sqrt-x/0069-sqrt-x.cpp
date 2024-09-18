class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x/2;
        while(l<=r){
            unsigned long mid = l + (r-l)/2;
            if(mid * mid <= x and (mid + 1) * (mid + 1) > x){
                return mid;
            }
            else if(mid * mid > x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return 1;
    }
};
