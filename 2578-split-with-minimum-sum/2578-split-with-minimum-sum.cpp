class Solution {
public:
    int splitNum(int num) {
        vector <int> v;
        while(num >= 1){
            int n = num%10;
            num /= 10;
            v.push_back(n);
        }
        sort(v.begin(),v.end());
        int inc1;
        int inc2;
        if(v.size()%2==0){
            inc1 = pow(10,(v.size()/2)-1);
            inc2 = pow(10,(v.size()/2)-1);
        }
        else{
            inc1 = pow(10,(v.size()/2));
            inc2 = pow(10,(v.size()/2)-1);
        }
        int num1 = 0;
        int num2 = 0;
        for(int i = 0; i < v.size(); i++){
            if(i%2==0){
                num1 += v[i] * inc1;
                inc1 /= 10;
            }
            else{
                num2 += v[i] * inc2;
                inc2 /= 10;
            }
        }
        return num1 + num2;
    }
};
