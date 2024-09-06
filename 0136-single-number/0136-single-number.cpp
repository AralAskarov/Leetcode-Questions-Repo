// https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n;
        for(int i = 0; i < nums.size(); i+=2){
            if(i == nums.size()-1 or nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};