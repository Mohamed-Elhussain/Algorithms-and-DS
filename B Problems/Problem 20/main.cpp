#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int a1[26], a2[26];
int main(){
    string s,t;
    cin>>s>>t;

    for(int i = 0; i < s.length(); ++i){
        ++a1[s[i] - 'a'];
    }
    for(int i = 0; i < t.length(); ++i){
        ++a2[t[i] - 'a'];
    }
    for(int i = 0; i < 26; ++i){
        if(a1[i] < a2[i]){
            cout<<"need tree";
            return 0;
        }
    }

    if(s.length() == t.length()){cout<<"array"; return 0;}

    for(int i = 0, j = 0; i < s.length(); ++i){
        if(t[j] == s[i]){
            ++j;
        }
        if(j == t.length()){
            cout<<"automaton"; return 0;
        }
    }
    cout<<"both";

    return 0;
}
