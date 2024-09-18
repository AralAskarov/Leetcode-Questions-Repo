class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        string s2 = "";        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                ones++;
            }
        }
        for(int i = 0; i < s.size(); i++){
            if(ones>1){
                s2+='1';
                ones--;
            }
            else{
                s2+='0';
            }
        }
        s2[s.size()-1]='1';
        return s2;
    }
};
