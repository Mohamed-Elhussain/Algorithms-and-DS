#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll n;
    cin>>n;

    if(n % 2 == 0){
        cout << n/2;
    }

    else cout << -1 * ( (n/2) + 1);

    return 0;
}
