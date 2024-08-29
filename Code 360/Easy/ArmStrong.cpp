#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int num) {
    int orginalNumber = num;
    int ans = 0;
    while(num != 0){
        int ele = num % 10;
        int cube = ele * ele * ele;
        ans = ans + cube;
        num /= 10;
    }
    cout<<num<<endl;
    cout<<ans<<endl;
    if(ans == orginalNumber){
        return true;
    }
    return false;
}
int main()
{
    cout<<isArmstrong(153);
    return 0;
}