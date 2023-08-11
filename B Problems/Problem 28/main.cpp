#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    long long n,res = 1;
    cin>>n;
    bool flag = true;
    int arr[n];
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
        if(arr[i] == 1){
            flag = false;
        }
    }
    if(flag){cout<<0; return 0;}

    for(int i = 0; i<n; ++i){
        if(arr[i] == 1){
            for(int j = i + 1; j<n; ++j){
                if(arr[j] == 1){
                res = res * (j - i);
                break;
                }
            }
        }
    }
    cout<<res;
    return 0;
}
