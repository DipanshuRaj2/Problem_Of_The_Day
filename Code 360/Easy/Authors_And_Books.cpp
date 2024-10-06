#include <bits/stdc++.h>
using namespace std;
vector<string> arrangeAuthors(vector<vector<string>>&s){
    int n = s.size();
    vector<string>str;
    for(int i = 0; i<n; i++){
        str.push_back(to_string(i+1) + ". "+s[i][0]);
        for(int j = 1; j<s[i].size(); j++){
            char letter = 'A' +  (j - 1);
            string entry = "  " + string(1,letter)+ ". "+ s[i][j];
            str.push_back(entry);
        }
    }
    cout<<"ans: "<<endl;
    for(int i = 0; i<str.size(); i++){
        cout<<str[i]<<" ";
    }
    return str;
}
int main()
{
    vector<vector<string>>s = {{"4","ChetanBhagat", "TwoStates", "Revolution", "HalfGirlfriend", "OneIndianGirl"},{"2", "JKRowling", "HarryPotter", "FantasticBeasts"}};

    vector<string>str = arrangeAuthors(s);  
    
}