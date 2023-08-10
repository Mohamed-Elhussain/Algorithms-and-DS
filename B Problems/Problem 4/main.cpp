#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll vertical_filled = (a * d - c * b);
    ll horizontal_filled = (b * c - d * a);

    if(vertical_filled > 0){
        cout<<vertical_filled / __gcd(vertical_filled, a*d)<<'/'<<a*d / __gcd(vertical_filled, a*d);
    }
    else
        cout<<horizontal_filled / __gcd(horizontal_filled, b*c)<<'/'<<b*c / __gcd(horizontal_filled, b*c);

    return 0;
}
