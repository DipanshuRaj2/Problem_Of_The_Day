#include <bits/stdc++.h>
using namespace std;
void reverseStr(string& str, int i, int n){
    if(i >= n)return ;
    swap(str[i], str[n-1]);
    reverseStr(str, i+1, n - 1);
}
string reverseString(string &str){
    // first approach
    // reverse(str.begin(), str.end());
    // return str;

    //second approach
    // string temp = "";
    // for(int i = str.size()-1; i >= 0; i--){
    //     temp = temp + str[i];
    // }
    // return temp;
    
    // third approach
    // int i = 0;
    // int j = str.size()-1;
    // while(i <= j){
    //     swap(str[i] , str[j]);
    //     i++, j--;
    // }
    // return str;

    // fourth approach use recursion
    reverseStr(str, 0, str.size());
    return str;
}
int main()
{
    string str = "qwerty";
    cout<<"reverse: "<<reverseString(str);
    return 0;
}   