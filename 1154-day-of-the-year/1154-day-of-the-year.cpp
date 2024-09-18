class Solution {
public:
    int dayOfYear(string date) {
        vector <int> v = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int num = 0;
        int month = (date[6] - '0') + (date[5] - '0') * 10;
        for(int i = 0; i < month - 1; i++){
            num += v[i];
        }
        int day = (date[8] - '0') * 10 + (date[9] - '0');
        int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
        if((year % 4 == 0 and year % 100 != 0) or (year % 4 == 0 and year % 400 == 0)){
            if(month > 2 and num+day >= 60)
                num++;
        }
        return num + day;
    }
};
