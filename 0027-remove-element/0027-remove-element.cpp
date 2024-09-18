class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == val){
                nums[i] = -1;
                cnt++;
            }
        }
        sort(nums.begin(), nums.end(), [](int v1, int v2) { return v1 > v2; });
        return n - cnt;
    }
};
