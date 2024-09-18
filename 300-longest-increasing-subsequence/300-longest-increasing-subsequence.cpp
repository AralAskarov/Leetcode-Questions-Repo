class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector <int> ind(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++){
            int cnt = 1;
            for(int j = i - 1; j >= 0; j--){
                if(nums[i] > nums[j]){
                    if(cnt <= ind[j]){
                        cnt = ind[j] + 1;
                    }
                }
            }
            ind[i] = cnt;
        }
        sort(ind.begin(), ind.end());
        return ind[nums.size() - 1]; 
    }
};
