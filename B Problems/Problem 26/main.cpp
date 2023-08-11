#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int number_divisors;
const int MOD = 1073741824 ;
long long arr[1000001];
long long divisors(long long o){
    if (arr[o] != 0) {
            return arr[o];
        }
    int c = 0;

    for(int m = 1; m*m <= o; ++m){
        if(o % m == 0){
            ++c;
            if(m*m != o){
                ++c;
            }
        }
    }
    arr[o] = c;

    return c;

}
int main()
{
    long long x,y,z, sum = 0;
    cin>>x>>y>>z;

    for(int i = 1; i <= x; ++i){

        for(int j = 1; j <= y; ++j){

            for(int k = 1; k<=z; ++k){
                number_divisors = i*j*k;
                sum += divisors(number_divisors);
                    }
                }
            }




    cout<<sum % MOD;
return 0;
}
