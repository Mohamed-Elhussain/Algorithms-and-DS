#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll n,k,x, cnt = 0;
    cin>>n>>k;

    for(ll i = 0; i < n; ++i){
        cin >> x;
        if(x + k <= 5){
            ++cnt;
        }
    }

   cout<<cnt/3;
    return 0;
}
