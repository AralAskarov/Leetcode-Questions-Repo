class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector <int>> v;
        v.push_back({1});
        if(numRows == 1) return v;
        v.push_back({1,1});
        if(numRows == 2) return v;
        for(int i = 2; i < numRows; i++){
            vector <int> v1;
            v1.push_back(1);
            for(int j = 1; j < i; j++){
                v1.push_back(v[i-1][j]+v[i-1][j-1]);
            }
            v1.push_back(1);
            v.push_back(v1);
        }
        return v;
    }
};
