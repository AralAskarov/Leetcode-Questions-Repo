class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        set <int> s1;
        set <int> s2;
        for(int i = 0; i < v1.size(); i++){
            s1.insert(v1[i]);
        }
        for(int i = 0; i < v2.size(); i++){
            s2.insert(v2[i]);
        }
        vector <int> v;
        std::set<int>::iterator it1 = s1.begin();
        std::set<int>::iterator it2 = s2.begin();
        while(it1 != s1.end() && it2 != s2.end()){
            if(*it1==*it2){
                v.push_back(*it1);
                it1++;
                it2++;
            }
            else{
                if(*it1>*it2){
                    it2++;
                    continue;
                }
                it1++;
            }
        }
        return v;
    }
};
