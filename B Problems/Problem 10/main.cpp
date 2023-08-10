#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,a,b,x;
    cin>>n>>a>>b;

   while(n--){
    cin>>x;
    cout<<((x*a)%b) / a<<" ";
   }


    return 0;
}
