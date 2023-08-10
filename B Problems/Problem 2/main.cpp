#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXS = 200010;

ll arr[MAXS][2];
string a,b;
ll cnt = 0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;

    for(ll i = 1; i <= b.length(); ++i){
        for(ll j = 0; j < 2; ++j){
            arr[i][j] = arr[i-1][j];
        }
        ++arr[i][b[i-1] - '0'];
    }

    for(ll i = 0, c; i < a.size(); i++) {
        c = a[i]-'0';
        for (int j = 0; j < 2; j++) {
            cnt += abs(c - j) * (arr[b.size() - a.size() + i + 1][j] - arr[i][j]);
        }
    }

    cout<<cnt<<"\n";


    return 0;
}
