#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

   ll n, cnt = 0;
   cin>>n;

   for(ll i = 1; i < n; ++i){
    if( (n-i) % i == 0){
        ++cnt;
    }
   }
   cout<<cnt;

    return 0;
}
