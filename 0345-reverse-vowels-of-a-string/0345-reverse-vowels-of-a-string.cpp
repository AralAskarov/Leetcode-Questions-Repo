bool isvowel(char c){
    if(c == 'a' or c == 'e' or c == 'i' or c == 'u' or c == 'o'){
        return true;
    }
    if(c == 'A' or c == 'E' or c == 'I' or c == 'U' or c == 'O'){
        return true;
    }
    return false;
}

class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l<=r){
            if(!isvowel(s[l])) l++;
            if(!isvowel(s[r])) r--;
            else if(isvowel(s[l]) and isvowel(s[r])) swap(s[l++], s[r--]);
        }
        return s;
    }
};
