class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int cnt = 0;
        for(int i = 0; i < height.size(); i++){
            for(int j = i+1; j < height.size(); j++){
                if(height[i]>=height[j]){
                    cnt = height[j] * (j-i);
                }
                else{
                    cnt = height[i] * (j-i);
                }
                if(cnt>max){
                    max = cnt;
                }
            }
        }
        return max;
    }
};
