#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string &str){
	int i = 0;
	int n = str.size()-1;
	while(i <= n){
		if(str[i] != str[n])
			return false;
		i++, n--;
	}
	return true;
}
int countNumberOfPalindromeWords(string &s)
{
	//Your code goes here
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	
	int cnt = 0;
	string ans = "";
	for(int i = 0; i<=s.size(); i++){
		if(i < s.size() && isalpha(s[i])){
			ans += s[i];
		}
		else{
			if(!ans.empty() && checkPalindrome(ans)){
				cnt++;
			}
			ans = "";
		}
	}
	return cnt;
}
int main()
{
    string s = "a w e r t y u";
    cout<<countNumberOfPalindromeWords(s);
    return 0;
}