#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

  ll t,n;
  cin>>t;

  while(t--){
    cin>>n;
    ll arr[n];
    ll ans = 0;

    for(ll i = 0; i < n; ++i){
        cin>>arr[i];
    }

    for(ll i = 0; i < n; ++i) {
        ans = __gcd(ans, abs(arr[i] - arr[n - i - 1]));
    }

    cout<<ans<<"\n";

  }

    return 0;
}
