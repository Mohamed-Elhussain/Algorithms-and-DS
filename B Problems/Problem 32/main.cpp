#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k;
    long long sum = 0;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    for(int i = 0; i<n; ++i){
        if(arr[i] < 0 && k>0){
            arr[i] = arr[i] * -1;
            k--;
        }
        else break;
    }
    sort(arr,arr+n);
    if(k){
        if(k%2){
            arr[0] = arr[0] * -1;
        }
    }

    for(int i = 0; i<n; ++i){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
