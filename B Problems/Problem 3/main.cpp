#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll n, a, first = 0, second = 0, keep;
    vector<ll>v1,v2;
    cin>>n;

    for(ll i = 0; i < n; ++i){
        cin>>a;
        if(a > 0){
            first+=a;
            v1.push_back(a);
        }
        else {second+=abs(a); v2.push_back(abs(a));}
        if(i == n-1){
            keep = a;
        }
    }

   if(first > second){
    cout<<"first"; return 0;
   }
   else if(second > first){
    cout<<"second"; return 0;
   }

   for(ll i = 0; i < v2.size(); ++i){
    if(v1[i] > v2[i]){
        cout<<"first";
        return 0;
    }
    else if(v2[i] > v1[i]){
        cout<<"second";
        return 0;
    }
   }
   if(keep > 0){cout<<"first";}
   else cout<<"second";


    return 0;
}
