class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int min = 1e9;
        for(int i = 0; i < letters.size(); i++){
            if(min > letters[i] - target and letters[i] > (target)){
                min = letters[i] - target;
            }
        }
        if(min == 1e9){
            return letters[0];
        }
        return char(target + min);
    }
};