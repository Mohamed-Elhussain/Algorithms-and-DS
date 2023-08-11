#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    long long triangles = 1, res = 1, equal_6 = 1 , MOD = 1e9 + 7;
    cin>>triangles;

    for(int i = 1; i<=triangles*3; ++i){
        res = res*3 % MOD;
    }

    for(int i = 1; i <= triangles; ++i){
        equal_6 = equal_6 * 7 % MOD;
    }

    cout<<(res - equal_6 + MOD) % MOD;
return 0;
}
