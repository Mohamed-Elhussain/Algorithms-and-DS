#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        ll cnt = 1;
        bool flag = false;

        if(s.length() == 1){
            cout<<1<<"\n"<<s<<"\n";
            continue;
        }

        for(ll i = 1; i < s.length(); ++i){
            if(s[i] != '0'){
                flag = true;
                ++cnt;
            }
        }

        if(!flag){
            cout<<1<<"\n"<<s<<"\n";
            continue;
        }
        cout<<cnt<<"\n";

        for(ll i = 0; i < s.length(); ++i){

            if(s[i] != '0'){
            cout<<s[i];
            for(ll j = i+1; j < s.length(); ++j){
                cout<<'0';
            }

            cout<<" ";
            }
        }
        cout<<"\n";


    }

    return 0;
}
