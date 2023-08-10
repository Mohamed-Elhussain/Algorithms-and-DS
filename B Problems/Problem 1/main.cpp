#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       ll n,x,y;
       cin>>n;
       map<ll,ll>mp,mp2;
       ll ans = 0;

       for(ll i = 0; i < n; ++i){
        cin>>x>>y;
        ans += mp[x+y]; mp[x+y]++;
        ans += mp2[x-y]; mp2[x-y]++;
       }

    cout<<ans;

    return 0;
}
