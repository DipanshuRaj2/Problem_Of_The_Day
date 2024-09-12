#include <bits/stdc++.h>
using namespace std;
long countOfNumbers(long n)
{
    long long cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int ele = i;
        bool flag = false;
        while (ele != 0)
        {
            int last = ele % 10;
            if (last == 0 || last == 1)
            {
                flag = true;
            }
            else{
                flag = false;
                break;
            }
            ele /= 10;
        }
        if (flag == true)
        {
            cout << i << "   ";
            cnt++;
        }
    }
    cout << endl;
    return cnt;
}
int main()
{
    cout << countOfNumbers(21);
    return 0;
}
//