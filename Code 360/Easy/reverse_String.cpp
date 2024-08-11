#include <bits/stdc++.h>
using namespace std;
string reverseString(string &str){
    // reverse(str.begin(), str.end());
    // return str;

    // string temp = "";
    // for(int i = str.size()-1; i >= 0; i--){
    //     temp = temp + str[i];
    // }
    // return temp;
    
    int i = 0;
    int j = str.size()-1;
    while(i <= j){
        swap(str[i] , str[j]);
        i++, j--;
    }
    return str;
}
int main()
{
    string str = "werty";
    cout<<"reverse: "<<reverseString(str);
    return 0;
}   