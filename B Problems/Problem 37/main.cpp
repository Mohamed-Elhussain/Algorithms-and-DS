#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    set<int>s;
    vector<int>v;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size() < 3){
        cout<<"YES"; return 0;}
    if(s.size()>=4){
        cout<<"NO";
        return 0;
    }
    int keep = 0;
    if(s.size()==3){
        sort(arr,arr+n);
        for(int i = 0; v.size() < 3; ++i ){
            if(arr[i]!=arr[i+1]){
                keep = arr[i];
                v.push_back(keep);
            }
        }

        if(v[2] - v[1] == v[1] - v[0] ){
            cout<<"YES";
        }
        else cout<<"NO";
    }


    return 0;
}
