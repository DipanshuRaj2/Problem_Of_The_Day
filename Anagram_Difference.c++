#include <bits/stdc++.h> 
using namespace std;
#include <bits/stdc++.h> 
string removeChar(string &str, char ch){
    for(int i = 0; i<str.size(); i++){
        if(str[i] == ch){
            str.erase(i, 1);
            break;
        }
    }
    return str;
}
int getMinimumAnagramDifference(string &str1, string &str2) {
    // Write your code here.
    int cnt = 0;
    for(int i = 0; i<str1.size(); i++){
        bool check = true; char ch = str1[i];
        for(int j = 0; j<str2.size(); j++){
            if(ch == str2[j]){
                check = false;
                str2 = removeChar(str2, ch);
                break;
            }
        }
        if(check == true) cnt++;
    }
    return cnt;
}
int main(){
    string str1 = "leetcode";
    string str2 = "practice";
    cout<<getMinimumAnagramDifference(str1, str2);
    
    return 0;
}