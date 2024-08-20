// #include <bits/stdc++.h>
// using namespace std;
// long long int floorSqrt(long long int n) {
//     long long int low = 1;
//     long long int high = n;
//     long long int ans = 0;

//     while (low <= high) {
//         long long int mid = (low + high) / 2;

//         if (mid * mid <= n) {
//             ans = mid;
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     cout<<floorSqrt(9883934);
//     return 0;
// }

// find the nth root of m
#include <bits/stdc++.h>
using namespace std;


int nthRootOfM(int n, int m){
    for(int i = 1; i<=m; i++){
        int power = pow(i, n);
        if(power == m){
            return i;
        }
        else if(power > m){
            break;
        }
    }
    return -1;
}
int main()
{
    cout<<nthRootOfM(3, 27);
    return 0;
}