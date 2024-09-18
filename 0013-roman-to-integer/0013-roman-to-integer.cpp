int num(char c){
    if(c == 'I'){
        return 1;
    }
    else if(c == 'V'){
        return 5;
    }
    else if(c == 'X'){
        return 10;
    }
    else if(c == 'L'){
        return 50;
    }
    else if(c == 'C'){
        return 100;
    }
    else if(c == 'D'){
        return 500;
    }
    else if(c == 'M'){
        return 1000;
    }
    return 0;
}

class Solution {
public:
    int romanToInt(string s) {
        int cnt = 0;
        for(int i = 1; i < s.size(); i++){
            if(num(s[i - 1]) >= num(s[i])){
                cnt += num(s[i - 1]);
            }
            else{
                cnt -= num(s[i - 1]);
            }
        }
        cnt += num(s[s.size() - 1]);
        return cnt;
    }
};
