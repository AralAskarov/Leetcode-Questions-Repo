class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> a(numRows, vector<char>(1000, 0));
        int j = 0;
        int cnt = 0;
        for(int i = 0; i < s.size();){
            cnt = i;
            for(; i < numRows + cnt; i++){
                a[i - cnt][j]=s[i];
            }
            cnt = i;
            // cout << i << "dasd" << endl;
            for(int k = numRows - 2; k > 0; k--){
                if(i >= s.size()){
                    break;
                } 
                a[k][j+1] = s[i++];
                j++;
            }
            j++;
        }

        s = "";
        for(int i = 0; i < numRows; i++){
            for(int j = 0; j < 100; j++){
                if(a[i][j] != 0){
                    s += a[i][j];
                }
            }
        }
        return s;
    }
};
