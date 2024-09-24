// #include<iostream>
// using namespace std;
// void fib(int n){ 
//     if(n == 0){
//         return;
//     }
//     if(n== 1){
//         return;
//     }
//     fib(n-1) + fib(n-2);
// }
// int main(){
//     int n = 10;
//     fib(n);
// }

// #include<iostream>
// using namespace std;
// void fib(int n){
//     int first = 0;
//     int second = 1;
//     cout<<first <<" "<<second<<" ";
//     for(int i = 2; i<n; i++){
//         int third = first + second;
//         first = second;
//         second = third;
//         cout<<third<<" ";
//     }
// }
// int main()
// {
//     int n = 10;
//     fib(10);
//     return 0;
// }


#include<iostream>
using namespace std;
bool checkPrime(int n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i * i <=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
void printPrime(int n){
    if(n < 2){
        cout<<"No prime";
    }
    for(int i = 2; i<=n; i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
   int n = checkPrime(101);
   printPrime(101);
    return 0;
}