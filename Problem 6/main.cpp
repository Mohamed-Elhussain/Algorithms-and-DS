#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

     string s;
     getline(cin, s);
     set<char>uni;

     for(int i = 1; i < s.length()-1; ++i){
        if(s[i] != ',' && s[i] != ' '){
            uni.insert(s[i]);
        }
     }

     cout<<uni.size();

    return 0;
}
