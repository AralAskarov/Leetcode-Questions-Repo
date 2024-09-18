class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l = 0;
        long long r = sqrt(c);
        while(l <= r){
            if(l * l == c) return true;
            if(r * r == c) return true;
            if(l * l + r * r == c) return true;
            else if(l * l + r * r > c) r--;
            else l++;
        }
        return 0;
    }
};
