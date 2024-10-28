#include <bits/stdc++.h>
using namespace std;
long long titleToNumber(string &str)
{
    if (str.length() == 1)
        return str[0] - 'A' + 1;
    
    else
    {
        long long count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            int len = str[i] - 'A' + 1;
            int mod = 26 % len;
            count += len + mod;
        }
         return count;
    }
}
int main()
{
    string str = "AZ";
    cout << titleToNumber(str);
    return 0;
}