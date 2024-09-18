class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a = nums[0]; int b = -1e9; int c = -1e9;
        for(int i = 1; i < nums.size(); i++){
            if(a < b and b < nums[i]){
                c = nums[i];
                return true;
            }
            else if(a < nums[i]){
                b = nums[i];
            }
            else if(a > nums[i] and i < nums.size() - 2){
                a = nums[i];
                // b = -1e9; c = -1e9;
            }
            
        }
        return false;
    }
};
