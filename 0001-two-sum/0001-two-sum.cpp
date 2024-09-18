class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int cnt = nums[0];
        int index = 0;
        for(int i = 1; i<nums.size(); i++){
            if(cnt+nums[i]==target){
                return {index, i};
            }
            if(i == nums.size()-1){
                index++;
                i=index;
                cnt = nums[index];
            }
        }
        return nums;
    }
};
