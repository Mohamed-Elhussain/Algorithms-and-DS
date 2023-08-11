#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,m,x,y,z,sum = 0;
    cin>>n>>m;
    int arr[n+1] = {0};
    for(int i = 0; i<m; ++i){
        cin>>x>>y>>z;
        arr[x-1]-=z;
        arr[y-1]+=z;
    }

    for(int i = 0; i<n; ++i){
        if(arr[i]>0){
        sum+=arr[i];
        }
    }
    cout<<sum;
    return 0;
}
