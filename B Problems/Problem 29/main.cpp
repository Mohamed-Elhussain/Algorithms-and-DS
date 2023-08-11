#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<vector<int>>seq(1e5+9);
    for(int i = 0; i<n; ++i){
        cin>>x;
        seq[x].push_back(i);
    }

    vector<pair<int,int>>ans;
    bool flag = true;
    for(int i = 0; i<=1e5; ++i){
        flag = true;
        if(seq[i].size() == 0) {continue;}
        else if(seq[i].size() == 1){ans.push_back(make_pair(i,0));}
        else if(seq[i].size() == 2){ans.push_back(make_pair(i,seq[i][1]-seq[i][0]));}
        else{
            for(int j = 2; j<seq[i].size() && flag; ++j){
                if(seq[i][j] - seq[i][j-1] != seq[i][j-1] - seq[i][j-2]){
                    flag = false;
                }
            }
            if(flag){
            ans.push_back({i, seq[i][1] - seq[i][0]});
        }
        }
    }
    cout<<ans.size()<<endl;
    for(int i = 0; i<ans.size(); ++i){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}
