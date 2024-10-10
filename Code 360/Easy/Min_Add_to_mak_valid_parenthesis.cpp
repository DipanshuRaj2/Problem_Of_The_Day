/*921. Minimum Add to Make Parentheses Valid
Solved
Medium
Topics
Companies
A parentheses string is valid if and only if:

It is the empty string,
It can be written as AB (A concatenated with B), where A and B are valid strings, or
It can be written as (A), where A is a valid string.
You are given a parentheses string s. In one move, you can insert a parenthesis at any position of the string.

For example, if s = "()))", you can insert an opening parenthesis to be "(()))" or a closing parenthesis to be "())))".
Return the minimum number of moves required to make s valid.

 

Example 1:

Input: s = "())"
Output: 1
Example 2:

Input: s = "((("
Output: 3
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int i = 0;
        while(i < s.size()){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top() == '(' && s[i] == ')'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
        }
        return st.size();
    }
};
int main(){
    Solution *sol = new Solution();
    string s = "())";
    cout<<sol->minAddToMakeValid(s);
    delete(sol);//deallocate memory
 return 0;
 }