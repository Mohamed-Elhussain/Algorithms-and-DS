#include <bits/stdc++.h>
using namespace std;

int main(){

string s;
cin >> s;
int cnt_upper = 0, cnt_lower = 0;
for(int i = 0; i < s.length(); ++i){
    if(isupper(s[i])) cnt_upper++;
    else cnt_lower++;
}

if(cnt_lower >= cnt_upper){
    for(int i = 0; i < s.length(); ++i){
        s[i] = tolower(s[i]);
        cout<<s[i];
    }
return 0;
}

for(int i = 0; i < s.length(); ++i){
    s[i] = toupper(s[i]);
    cout<<s[i];
}

return 0;
}
