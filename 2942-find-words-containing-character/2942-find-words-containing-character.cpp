class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> v;
        for(int i = 0; i < words.size(); i++){
            string s  = words[i];
            for(int j = 0; j < words.size(); j++){
                if(s[j] == x){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};
