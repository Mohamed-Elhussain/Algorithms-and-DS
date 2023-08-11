#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

int a,x,y;
cin>>a>>x>>y;

    if(y == 0 || abs(x) >= a || y % a == 0){
        cout<<-1; return 0;
    }

    int level = (y / a) + 1;
    int ans;
    if(level == 1){
        if(abs(x) >= (a+1)/2){
            ans = -1;
            cout<<ans;
            return 0;
        }
        else {ans = 1;}
        cout<<ans;
        return 0;
    }

    else if(level % 2 == 1){

        int odd_levels = level / 2;
        int ans = odd_levels * 2 + (odd_levels -  1) + 2;
        if(x < 0){
            --ans;
        }
        if(x == 0){
            ans = -1;
            cout<<ans;
            return 0;
        }
    cout<<ans;
    return 0;
    }
    else{
        int odd_levels = (level - 1) / 2;
        ans = odd_levels * 2 + (odd_levels + 1) + 1;
        if(abs(x) >= (a+1) /2){
            ans = -1;
            cout<<ans;
            return 0;
        }
    cout<<ans;
    return 0;
    }

return 0;
}
