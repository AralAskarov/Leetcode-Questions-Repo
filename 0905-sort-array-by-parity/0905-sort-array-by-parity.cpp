class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(cnt>nums.size()){
                break;
            }
            if(nums[i]%2==1){
                nums.push_back(nums[i]);
                nums.erase(nums.begin()+i);
                i--;
                cnt++;
            }
        }
        return nums;
    }
};
