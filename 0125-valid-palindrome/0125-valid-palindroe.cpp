class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for(int i = 0; i < s.size(); i++){
            if((s[i]>='a' and s[i]<='z') or (s[i]>='0' and s[i]<='9')){
                s2 += s[i];
            }
            else if(s[i]>='A' and s[i]<='Z'){
                s2 += s[i] + 32;
            }
        }
        
        int j = s2.size() - 1;
        for(int i = 0; i < s2.size()/2; i++){
            if(s2[i]!= s2[j]){
                return false;
            }
            j--;
        }
        return true;
    }
};