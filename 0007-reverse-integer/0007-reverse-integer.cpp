class Solution {
public:
    int reverse(int x) {
        bool flag = 0;
        if(x > INT_MAX or x < -INT_MAX){
            return 0;
        }
        if(x < 0){
            flag = 1;
            x *= -1;
        }
        string s = "";
        while(x>=1){
            s += char((x % 10) + '0');
            x /= 10;
        }
        int num = 0;
        for(int i = 0; i < s.size(); i++){
            if (num>INT_MAX/10 || num<INT_MIN/10) return 0;
            num *= 10;
            num += long(s[i] - '0');
        }
        if(flag){
            num *= -1;
        }
        return num;
    }
};
