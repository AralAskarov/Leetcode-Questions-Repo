// https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.size() == 1){
            return nums;
        }
        int m = 1;
        vector <int> v;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i == nums.size() - 1){
                if(m>nums.size()/3)
                v.push_back(nums[i]);
                return v;
            }
            if(nums[i] == nums[i+1]){
                m++;
            }
            else{
                if(m>nums.size()/3){
                    v.push_back(nums[i]);
                }
                m = 1;
            }
        }
        return v;
    }
};