#include<bits/stdc++.h>
using namespace std;
vector<string> makeBeautifulString(int n){
	string ans = ""; string ans2 = "";
	for(int i = 0; i< n; i++){
          if (i % 2 == 0) {
            ans.push_back('1');
            ans2.push_back('0');
          } else {
            ans.push_back('0');
            ans2.push_back('1');
          }
        }
        return {ans, ans2};
}
int diff(string& a1, string& str, int n){
	int cnt = 0;
	for(int i = 0; i<n; i++){
		if(str[i] != a1[i]){
			cnt++;
		}
	}
	return cnt;
}
int makeBeautiful(string str) {
	// Write your code here
	int n = str.length();
	vector<string>ans = makeBeautifulString(n);
	string a1 = ans[0];
	string a0 = ans[1]; 
	int diff1 = diff(a1, str, n);
	int diff2 = diff(a0, str, n);

	return min(diff1, diff2);
}
int main(){
    string str = "010001";
    cout<<makeBeautiful(str);
}