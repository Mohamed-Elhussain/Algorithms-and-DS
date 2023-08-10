#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
int t,n;
cin>>t;

while(t--){
    int n,num;
    cin>>n;
    int arr[n];
    vector<int>odd, even;
    bool check = true;
    for(int i = 0; i < n; ++i){
        cin>>num;
        if(num % 2 == 0){even.push_back(num); arr[i] = 2;}
        else {odd.push_back(num); arr[i] = 1;}
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    for(int i = 0, e = 0, o = 0; i < n; ++i){
        if(arr[i] == 2){
            arr[i] = even[e];
            e++;
        }
        else {arr[i] = odd[o]; ++o;}
    }



    for(int i = 0; i < n-1; ++i){
      if(arr[i] > arr[i+1])
        check = false;
    }

    if(check){cout<<"YES\n";}
    else cout<<"NO\n";
}


return 0;
}
