class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        bool flag = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                flag = true;
            }
            else{
                if(flag == true){
                    flag = false; 
                    cnt = 0;
                }
                cnt++;
            }
        }
        return cnt;
    }
};
