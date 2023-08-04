#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,t;
    cin>>t;

    while(t--){
        cin>>n;
        ll arr[n];
        bool flag = false;

        for(ll i = 0; i < n; ++i){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        for(ll i = 0; i < n-1; ++i){
            if(arr[i+1] > arr[i] + 1){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"NO\n";
        }

        else{
        cout<<"YES\n";
        }
    }

    return 0;
}
