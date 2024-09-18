class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0;
        int b = 1;
        while(a<nums.size()){
            if(b==nums.size()){
                break;
            }
            if(nums[a]==0){
                if(nums[b]!=0){
                    int temp = nums[a];
                    nums[a] = nums[b]; 
                    nums[b] = temp;
                    b++;
                }
                else{
                    while(nums[b]==0){
                        if(b+1<nums.size()){
                            b++;
                        }
                        else{
                            a++;
                            break;
                        }
                    }
                    
                    a--;
                }
            }
            else{
                b++;
            }
            a++;
        }
    }
};
