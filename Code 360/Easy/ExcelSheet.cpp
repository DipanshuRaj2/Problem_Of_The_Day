#include <bits/stdc++.h>
using namespace std;
long long titleToNumber(string &str)
{
  long long result = 0;
  for(int i = 0; i<str.size(); i++){
    int value = str[i] - 'A' + 1;
    result = result * 26  + value;
  }
  return result;
}
int main()
{
    string str = "AZ";  
    cout << titleToNumber(str);
    return 0;
}