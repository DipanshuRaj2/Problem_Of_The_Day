//leetcode 1525
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //brute force
    int numSplits(string& s) {
        int cnt = 0; 
        for(int i = 0; i<s.length(); i++){
            unordered_set<char>leftSet; unordered_set<char>rightSet;

            for(int j = 0; j < i; j++){
                leftSet.insert(s[j]);
            }

            for(int j = i; j< s.length(); j++){
                rightSet.insert(s[j]);
            }

            if(leftSet.size() == rightSet.size())cnt++;

            
        }
        return cnt;
    }

    int numSplits1(string &s){

        int n = s.length(); 
        vector<int>pre(n , 0);
        vector<int>suff(n , 0);

        vector<int>freq(26, 0);

        int count = 0;
        for(int i = 0; i<n; i++){
            int ch = s[i] - 'a';
            freq[ch]++;

            if(freq[ch] == 1){
                count++;
            }

            pre[i] = count;
        }
        
        freq.assign(26, 0);
        count = 0;
        for(int i = n -1; i >= 0; i--){

            int ch = s[i] - 'a';
            freq[ch]++;
            
            if(freq[ch] == 1){
                count++;
            }
            suff[i] = count;    
        }
        count = 0;
        for(int i = 0; i < n-1; i++){
            if(pre[i] == suff[i+1]){
                count++;
            }
        }
        return count;
    }
};

int main(){
    string str = "aacaba";
    Solution* sol = new Solution();
    cout<<sol -> numSplits1(str);
    return 0;
}