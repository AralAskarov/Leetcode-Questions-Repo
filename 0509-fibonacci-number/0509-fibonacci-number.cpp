class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        int a = 0;
        int b = 1;
        int c = 1;
        while(n > 2){
            a = b; b = c;
            c = a + b;
            n--;
        }
        return c;
    }
};
