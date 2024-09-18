class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 1;
        int k = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(k == nums[i]){
                nums[i] = 101;
            }
            else{
                cnt++;
                k = nums[i];
            } 
        }
        sort(nums.begin(),nums.end());
        return cnt;
    }
};
