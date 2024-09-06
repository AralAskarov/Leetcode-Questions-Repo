// https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m = 1;
        int max = nums[0];
        int cnt = 0;
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]){
                m++;
            }
            else{
                m = 1;
            }
            if(cnt < m){
                max = nums[i];
                cnt = m;
            }
        }
        return max;
    }
};