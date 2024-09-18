class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
            map<string, int> m;
            string s = "";
            for(int i = 0; i < paragraph.size(); i++){
                if((paragraph[i] >= 'a' and paragraph[i] <= 'z') or (paragraph[i] >= 'A' and paragraph[i] <= 'Z')){
                    if(paragraph[i] >= 'A' and paragraph[i] <= 'Z'){
                        paragraph[i]+=32;
                        s += paragraph[i];
                    }
                    else{
                        s += paragraph[i];
                        }
                    // cout << s << endl;
                }
                else if(true){
                    bool flag = true;
                    for(int j = 0; j < banned.size(); j++){
                        if(s==banned[j]){
                            flag = false;
                        }
                    }
                    if(flag==true and s != ""){
                        // cout << s << endl;
                        m[s]++;
                    }
                    s = "";
                }
                else{
                    // s="";
                }
            }
            if(s!= ""){
                bool flag = true;
                for(int j = 0; j < banned.size(); j++){
                    if(s==banned[j]){
                        flag = false;
                    }
                }
                if(flag==true){
                    // cout << s << endl;
                    m[s]++;
                }
                s = "";
            }
            // cout << m["ball"];
            map<string, int>:: iterator it;
            int max = 0;
            string maxim = "";
            for(it=m.begin();it!=m.end();it++){ 
                if(it->second>max){
                    max = it->second;
                    maxim = it->first;
                }
            }
            return maxim;
    }
};
