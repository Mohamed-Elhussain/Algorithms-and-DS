#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll t,n;
    string timur = "Timur", s;
    sort(timur.begin(), timur.end());
    cin>>t;

    while(t--){

        cin>>n;
        cin>>s;

        sort(s.begin(), s.end());

        if(s == timur){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }

    return 0;
}
