#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll n, num;
    vector<ll>x,y,z;
    cin>>n;

    for(ll i = 1; i <= n; ++i){
        cin>>num;
        if(num == 1){
            x.push_back(i);
        }
        else if(num == 2){
            y.push_back(i);
        }
        else z.push_back(i);
    }

    ll sz = min(x.size(), min(y.size(), z.size()));
    cout<<sz<<"\n";

    for(ll i = 0; i < sz; ++i){
        cout<< x[i] << " " << y[i] << " " << z[i] << "\n";
    }


    return 0;
}
