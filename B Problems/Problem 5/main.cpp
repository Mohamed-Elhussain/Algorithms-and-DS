#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll MAX = 0, cnt = 0, num;

        for(ll i = 0; i < n; ++i){
            cin>>num;
            if(num == 1){
                ++cnt;
            }
            MAX += num;
        }

        if(MAX - n >= cnt && n!=1){
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }

    return 0;
}
