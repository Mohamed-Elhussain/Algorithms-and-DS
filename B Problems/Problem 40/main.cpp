#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,m,a,b,res = 0; cin>>n>>m;
    vector<set<int>>vec(n+1);
    while(m--){
        cin>>a>>b;
        vec[a].insert(b);
        vec[b].insert(a);
    }

    while(true){
        vector<int>v;

        for(int i = 1; i <= n; ++i){
            if(vec[i].size() == 1){
                v.push_back(i);
            }
        }

        for(int i = 0; i < v.size(); ++i){
            set<int>::iterator it = vec[ v[i] ].begin();
            vec[v[i]].clear();
            vec[*it].erase(v[i]);
        }
            if(v.size()){
                res++;
            }
            else break;

    }
    cout<<res;
    return 0;
}
