#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cin >> n;
    for(int i = 0;i < n; i++){
        int c; cin >> c;
        v.push_back(c);
    }
    vector <int> num(v.size());
    for(int i = 0; i < num.size(); i++){
        num[i] = v[v[i]];
    }
    for(int i = 0; i < num.size(); i++){
        cout << num[i] << " ";
    }

}