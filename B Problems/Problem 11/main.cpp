#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
ll t,n;
cin>>t;
while(t--){

    ll ans = -1;
    cin>>n;
    for(ll i = 2; i <= 1000; ++i){
        if(n % i == 0){continue;}
        else {ans = i-1; break;}
    }

    cout<<ans<<"\n";
}

return 0;
}
