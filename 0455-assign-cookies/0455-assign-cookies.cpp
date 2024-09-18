class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt = 0;
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        for(int i = 0; i < g.size(); i++){
            for(int j = i; j < s.size(); j++){
                if(s[j] >= g[i]){
                    cnt++;
                    s[j] = 0;
                    break;
                }
            }
        }
        return cnt;
    }
};
