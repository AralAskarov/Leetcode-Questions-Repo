class Solution {
public:
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        while(n>=7){
            int cnt = 0;
            while(n>=1){
                cnt += pow(n%10,2);
                n/=10;
            }
            if(cnt==1){
                return true;
            }
            n = cnt;
        }
        return false;
    }
};
