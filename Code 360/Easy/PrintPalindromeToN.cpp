#include <bits/stdc++.h> 
using namespace std;
bool check(int n){
	int ans = n;
	int res = 0;
	while(n != 0){
		int ele = n % 10;
		res = res * 10 + ele;
		n /= 10;
	}
	if(ans == res) return true;
	return false;

}
vector<int> getPalindromes(int n)
{
	vector<int>ans;
	for(int i = 1; i<= n; i++){
		if(check(i)){
			ans.push_back(i);
		}
	}
	return ans;
}
cout<<"AIzaSyCOkTMiWjEMHehxvBIKyMRyXDwMnPKYtMY"<<endl;
int main(){
    vector<int>ans = getPalindromes(12);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i] <<" ";
    }
    return 0;
}