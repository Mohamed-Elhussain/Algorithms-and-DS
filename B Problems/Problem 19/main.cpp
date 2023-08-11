#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    string s,t;
    cin>>s;
    bool check = false;
    if(s.size() < 26){cout<<-1; return 0;}
    for(int i = 0; i <= s.length() - 26; ++i){
        int q = 0;
        set<char>se;
        t = s.substr(i, 26);

        bool visited[26] = { };

        for(int j = 0; j < 26; ++j){
            if(t[j] == '?'){
                ++q;
            }
            else{se.insert(t[j]); visited[t[j] - 'A'] = true;}
        }

        if(se.size() + q >= 26){
            check = true;

            for(int j = i, m = 0; m < 26; ++j,++m){
                if(s[j] == '?'){
                    for(int k = 0; k < 26; ++k){
                        if(!visited[k]){
                            s[j] = k + 'A'; visited[k] = true; break;
                        }
                    }
                }

            }
            break;
        }
    }
    if(check){

        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '?'){
                s[i] = 'A';
            }
        }
        cout<<s;
    }
    else cout<<-1;
    return 0;
}
