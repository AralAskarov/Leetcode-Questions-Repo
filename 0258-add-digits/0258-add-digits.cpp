class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int cnt = 0;
            while(num>=1){
                cnt += num%10;
                num/=10;
            }
            num = cnt;
        }
        return num;
    }
};
