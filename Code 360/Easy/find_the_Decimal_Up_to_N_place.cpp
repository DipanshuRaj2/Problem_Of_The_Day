#include <bits/stdc++.h>
using namespace std;
string stringUpToNPlaces(int &a, int &b, int &n){
    float A = a;
    float B = b;
    stringstream ss;
    ss<<fixed<<setprecision(n)<<A/B;
    return ss.str();
}
int main()
{
    int a, b, n;
    a = 5, b = 4, n = 5;
    cout<<stringUpToNPlaces(a, b, n);
    return 0;
}   