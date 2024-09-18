class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector <int> v;
        for(int i = 0; i < s.size(); i++){
            int ind=1e9;
            int ind2=1e9;
            for(int j = i; j < s.size(); j++){
                if(s[j]==c){
                    ind = j-i;
                    break;
                }
            }
            for(int j = i; j >= 0; j--){
                if(s[j]==c){
                    ind2 = i-j;
                    break;
                }
            }
            if(ind>ind2){
                v.push_back(ind2);
            }
            else{
                v.push_back(ind);
            }
        }
        return v;

    }
};
