#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll ans=0;
ll n,l,r,x,num;
vector<ll>vec;
void back_track(int index, int sum, int element){
    if(index >= n){
        return;
    }

    sum += vec[index];

    if(sum != vec[index] && sum >= l && vec[index] - element >= x){
        if(sum > r){
            return;
        }
        ++ans;
        for(int i = index+1; i < n; ++i){
            back_track(i, sum, element);
        }
    }
    else{
        for(int i = index+1; i < n; ++i){
            back_track(i,sum,element);
        }
    }


}

int main(){
    cin>>n>>l>>r>>x;
    for(int i = 0; i < n; ++i){
        cin>>num;
        vec.push_back(num);
    }
   sort(vec.begin(), vec.end());

   for(int i = 0; i < n; ++i){
    back_track(i,0,vec[i]);
   }
   cout<<ans;

    return 0;
}
