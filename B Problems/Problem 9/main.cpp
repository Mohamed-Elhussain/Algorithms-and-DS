#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

   ll n, cnt = 0;
   string s ,ans= "";
   cin>>n;

    while(n--){
        cin>>s;
        if(s == "1"){
            continue;
        }

        bool check1 = false, check2 = true;


        if(s[0] == '1'){
            check1 = true;
        }

        if(check1){
        for(ll i = 1; i < s.length(); ++i){
            if(s[i] != '0'){
                check2 = false;
            }
        }
        }

        if(check1 && check2){
            cnt+=s.length()-1;
        }
        else {
           ans+=s;
        }

        if(s == "0"){
            cout<<'0';
            return 0;
        }

    }
    if(ans.size() == 0){
        cout<<1;
    }

    cout<<ans;
    for(ll i = 0; i < cnt; ++i){
        cout<<'0';
    }

    return 0;
}
