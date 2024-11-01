#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // this is good one
    string makeFancyString(string s) {
        string ans = "";
        if(s.size() == 1) return s;

        ans.push_back(s[0]);
        ans.push_back(s[1]);

        for(int i = 2; i<s.length(); i++){
            if(s[i] == s[i-1] && s[i] == s[i-2]) continue;
            else ans.push_back(s[i]);  
        }
        return ans;
    }
    //satisfi
    string makeFancyString1(string s){
        string ans = "";
        ans.push_back(s[0]); int cnt = 1;
        for(int i = 1; i<s.size(); i++){
            if(s[i] == ans.back()){
                cnt++;
                if(cnt < 3)ans.push_back(s[i]);
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
int main(){
    string s = "aaabaaaa";
    Solution* sol = new Solution();
    cout << sol->makeFancyString(s);
}