string convert2(string s){
    string ans = "";
    int cnt = 0;
    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] >= '0' and s[i] <= '9'){
            int num = 0;
            int multip = 1;
            for(int j = i; j >= 0; j--){
                if((s[j] == '[' or s[j] == ']') or (s[j] >= 'a' and s[j] <= 'z')){
                    break;
                }
                num += (s[j] - '0') * multip;
                multip *= 10;
                cnt++;
            }
            for(int j = 0; j <= i - cnt; j++){
                ans += s[j];
            }
            while(num){
                num--;
                for(int j = i+1; j < s.size(); j++){
                    if(s[j] != '[' and s[j] != ']'){
                        ans += s[j];
                    }
                }
            }
            return ans;
        }
    }
    if(ans.size() == 0){
        return s;
    }
    return ans;
}

string convert(string s){
    string res = "";
    stack <int> st;
    string sp = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '['){
            st.push(1);
            sp += s[i];
        }
        else if(s[i] == ']'){
            sp += s[i];
            st.pop();
            if(st.empty()){
                res += convert2(sp);
                sp = "";
            }
            else{
                sp = convert2(sp);
            }
        }
        else{
            sp += s[i];
        }
    }
    if(sp.size() != 0){
        res += sp;
    }
    return res;
}


class Solution {
public:
    string decodeString(string s) {
        return convert(s);
    }
};
