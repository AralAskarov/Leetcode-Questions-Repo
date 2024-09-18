class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int end = nums.size() - 1;
        for(int i = 1; i <= end; i++){
            nums[i-1] = (nums[i] + nums[i-1])%10;
            if(i==end){
                end--;
                i = 0;
            }
        }
        return nums[0];
    }
};
