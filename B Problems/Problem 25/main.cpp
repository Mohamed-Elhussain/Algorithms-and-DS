#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n,x,y,a,b;
    cin>>n>>x>>y;
    vector<double>slopes;
    bool x_bool = false, flag = true;
for(int i = 0; i<n; ++i){
    cin>>a>>b;
    if(x-a == 0){x_bool = true; continue;}


            for(int j = 0; j < slopes.size(); ++j){
                if( (double)(b - y) / (a - x) == slopes[j] ){
                    flag = false;
                }
                }
          if(flag){
                slopes.push_back((double)(b - y) / (a - x));
            }
            flag = true;
}

cout<<slopes.size() + x_bool;
return 0;
}
