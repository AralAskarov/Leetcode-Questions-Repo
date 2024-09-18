class Solution {
public:
    bool trueorfalse(vector<int>& nums){
        int buf = 0;
        int p = 0;
        for(int i = 0; i < nums.size();){
            if(i==nums.size()-1){
                return 1;
            }
            else if(nums[0]==0){
                return 0;
            }
            else if(nums[i]==0){
                nums[p]--;
                return trueorfalse(nums);
            }
            else{
                p = i;
                i = nums[i]+buf;
                if(i>nums.size()-1){
                    nums[i-nums[buf]]--;
                    i=buf;
                    continue;
                }
                buf=i;
            }
        }
        return 0;
    }
    bool canJump(vector<int>& nums) {
        return trueorfalse(nums);
    }
};
