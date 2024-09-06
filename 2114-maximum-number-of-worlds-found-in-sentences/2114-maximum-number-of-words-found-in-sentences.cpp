// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for(int i=0;i<sentences.size();i++){
            string s = sentences[i];
            int k = 1;
            for(int j=0;j<s.size();j++){
                if(s[j]==' '){
                    k++;
                }
            }
            if(max<k){
                max=k;
            }
        }
        return max;
    }
};