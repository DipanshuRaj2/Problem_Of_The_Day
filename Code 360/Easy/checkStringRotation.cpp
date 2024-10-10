#include<bits/stdc++.h>
using namespace std;
int isCyclicRotation(string &p, string &q) 
{
    // Write your code here
    if(p.length() != q.length()) return 0;
    string hold = p;
    int n = hold.length();
    int i = 0;
    while(i < n){
        char ch = p[0];
        p.erase(0, 1);
        p.push_back(ch);
        cout<< p<<endl;
        if(p == q) return 1;
        i++;
    }
    return 0;
}
int main(){
    string p = "dgebe";
    
    string q = "bedge";
    cout<<isCyclicRotation(p, q);

}