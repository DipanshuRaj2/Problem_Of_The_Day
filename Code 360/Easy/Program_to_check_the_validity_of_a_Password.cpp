#include<bits/stdc++.h>
using namespace std;
bool isValid(string &str) {
    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;

    // Check length constraint
    if (str.length() >= 8 && str.length() <= 15) {
        int i = 0;
        while (i < str.length()) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                hasLower = true;  // Lowercase letter
            } 
            else if (str[i] >= 'A' && str[i] <= 'Z') {
                hasUpper = true;  // Uppercase letter
            } 
            else if (str[i] >= '0' && str[i] <= '9') {
                hasDigit = true;  // Digit
            } 
           
            else if(str[i] == ' '){
                return false;  // Special character found, return false
            }
			 else {
                hasSpecial = true;  // Space is not allowed
            } 
            i++;
        }
    } 
    else {
        return false;  // Length constraint not met
    }

    return hasDigit && hasLower && hasUpper && hasSpecial;  // Returns true only if no special characters found and length is valid
}
int main(){
    string str = "CODiNGNinja+1";
    cout<<isValid(str);
 return 0;
 }