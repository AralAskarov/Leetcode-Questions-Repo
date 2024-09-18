class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag = 1;
        int cnt = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1] and flag < 2){
                nums[cnt] = nums[i];
                flag++;
                cnt++;
            }
            else if(nums[i] != nums[i-1]){
                flag = 1;
                nums[cnt] = nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};
