class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        int a = 1;
        int b = 2;
        int c = 3;
        while(n > 2){
            n--;
            c = a + b;
            a = b; b = c; 
        }
        return c;
    }
};
