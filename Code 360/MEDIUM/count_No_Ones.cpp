#include <bits/stdc++.h> 
using namespace std;
int countNumberofOnes(int N)
{
	int cnt = 0;
	for(int i = 1; i<=N; i++){
        int num = i;
		while(num != 0){
			int ele = num % 10;
			if(ele == 1) cnt++;
			num /=10;
		}
	}
	return cnt;
}
int main(){
    cout<<countNumberofOnes(100);
    return 0;
}