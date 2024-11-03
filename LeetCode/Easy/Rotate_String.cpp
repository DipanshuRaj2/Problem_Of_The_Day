#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        for(int i = 0; i<s.length(); i++){
            char ch = s[0];
            if(s == goal) return true;
            s.push_back(ch);
            s.erase(0, 1);
            n--;
            if(n == 0)break;
        }
        return false;
    }
};  
int main(){
    string s = "abcde", goal = "cdeab";
    Solution* sol = new Solution();
    cout<<sol->rotateString(s, goal);
 return 0;
 }