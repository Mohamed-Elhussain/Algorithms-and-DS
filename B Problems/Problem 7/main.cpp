#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll m,n;
    cin>>m>>n;
    ll arr[m][n];
    ll keep[m][n];
    ll store[m][n];

    for(ll i = 0; i < m; ++i){
        for(ll j = 0; j < n; ++j){
            cin>>arr[i][j];
            keep[i][j] = arr[i][j];
        }
    }

    for(ll i = 0; i < m; ++i){
        for(ll j = 0; j < n; ++j){
            if(keep[i][j] == 0){
                for(ll k = 0; k < m; ++k){
                    arr[k][j] = 0;
                }
                for(ll l = 0; l < n; ++l){
                    arr[i][l] = 0;
                }
            }
        }
    }

    for(ll i = 0; i < m; ++i){
        for(ll j = 0; j < n; ++j){
            store[i][j] = arr[i][j];
        }
    }

    for(ll i = 0; i < m; ++i){
        for(ll j = 0; j < n; ++j){
            if(store[i][j] == 1){
                for(ll k = 0; k < m; ++k){
                    arr[k][j] = 1;
                }
                for(ll l = 0; l < n; ++l){
                    arr[i][l] = 1;
                }
            }
        }
    }

    for(ll i = 0; i < m; ++i){
        for(ll j = 0; j < n; ++j){
            if(arr[i][j] != keep[i][j]){
                cout<<"NO"; return 0;
            }
        }
    }



    cout<<"YES\n";
    for(ll i = 0; i < m; ++i){
        for(ll j = 0; j < n; ++j){
            cout<<store[i][j]<<" ";
            }
            cout<<"\n";
        }



    return 0;
}
