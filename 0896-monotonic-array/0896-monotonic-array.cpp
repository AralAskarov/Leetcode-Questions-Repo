class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag = true;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                break;
            }
            if(nums[i] > nums[i+1]){
                flag = false;
                break;
            }
        }
        if(flag){
            for(int i = 0; i < nums.size()-1; i++){
                if(nums[i] > nums[i+1]){
                    return false;
                }
            }
        }
        else{
            for(int i = 0; i < nums.size()-1; i++){
                if(nums[i] < nums[i+1]){
                    return false;
                }
            }
        }
        return true;
        
    }
};
