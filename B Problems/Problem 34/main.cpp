#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool compare(const pair<double, int>&i, const pair<double, int>&j){
  return i.first < j.first;
}


int main(){
    double n,t1,t2,k,a,b ,higher_num, smaller_num;
    cin>>n>>t1>>t2>>k;
    vector<pair<int,int>>v;
    vector<pair<double,int>>keep;
    for(int i = 0; i<n; ++i){
        cin>>a>>b;
        higher_num = max(a,b);
        smaller_num = min(a,b);
        v.push_back(make_pair(smaller_num, higher_num));
    }

    for(int i = 0; i<n; ++i){
        if( (v[i].first * t1) - (v[i].first * t1 * k/100) + (v[i].second * t2) > (v[i].second * t1) - (v[i].second * t1 * k/100) + (v[i].first * t2) ){
        keep.push_back(make_pair( (v[i].first * t1) - (v[i].first * t1 * k/100) + (v[i].second * t2), i+1 ) );}
        else keep.push_back(make_pair( (v[i].second * t1) - (v[i].second * t1 * k/100) + (v[i].first * t2), i+1 ) );
    }
    sort(keep.begin(), keep.end(), compare);

    for(int i = 0; i<keep.size(); ++i){
        for(int j = 0; j<keep.size(); ++j){
        if(keep[i].first == keep[j].first){
            if(keep[i].second > keep[j].second){
                swap(keep[i].second , keep[j].second);
            }
        }
        }
    }

    for(int i = keep.size() - 1; i>=0; --i ){

     cout<<keep[i].second<<" ";
     printf("%.2lf\n", keep[i].first);
    }


    return 0;
}
