#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){

    int t,n,k, cnt = 0;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cnt = 0;
        for(int i = 1; i <= n; ++i){
            int first = i, second = n;
            bool check = true;
            for(int j = 0; j < k - 2; ++j){
                int fx = first;
                first = second - fx;
                second = fx;
                if(first > second || min(first, second) < 0){
                    check = false; break;
                }

            }
            if(check){
                ++cnt;
            }
        }
        cout<<cnt<<"\n";

    }
    return 0;
}
