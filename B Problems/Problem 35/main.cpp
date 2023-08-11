#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m,x,y,k,f_cordinate, s_cordinate, f_walks, s_walks, result = 0;
    cin>>n>>m>>x>>y>>k;
    while(k--){

        cin>>f_cordinate>>s_cordinate;
        if(f_cordinate > 0 ){
            f_walks = (n - x) / f_cordinate;
        }
        else if(f_cordinate < 0){
            f_walks = (x - 1) / (f_cordinate * -1);
        }
        else f_walks = INT_MAX;

        if(s_cordinate > 0){
            s_walks = (m - y) / s_cordinate;
        }
        else if(s_cordinate < 0){
            s_walks = (y - 1) / (-1 * s_cordinate);
        }
        else s_walks = INT_MAX;

        long long sum = min(f_walks, s_walks);

        result+=sum;

        x += f_cordinate * sum;
        y += s_cordinate * sum;

    }
    cout<<result;
    return 0;
}
