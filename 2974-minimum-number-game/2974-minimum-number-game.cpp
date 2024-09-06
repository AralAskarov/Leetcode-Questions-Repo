// https://leetcode.com/problems/minimum-number-game/description/
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0;i < nums.size(); i=i+2){
            int k = nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=k;
        }
        return nums;
    }
};