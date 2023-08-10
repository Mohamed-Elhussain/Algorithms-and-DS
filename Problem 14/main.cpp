#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0; i < n; ++i){
    cin>>arr[i];
}
if(is_sorted(arr,arr+n)){
    cout<<"yes"<<endl<<1<<" "<<1;
    return 0;
}

    bool check = false, flag = false; int N1, N2;
    for(int i = 0; i < n - 1; ++i){

    if(arr[i] < arr[i+1] && check){
        N2 = i;
        flag = true;
        reverse(arr + N1, arr + N2 + 1);
        break;
       }
    if(arr[i] > arr[i+1] && !check){
        N1 = i;
        N2 = n-1;
        check = true;

    }

    }

    if(!flag){reverse(arr + N1, arr + N2 + 1);}

    if(is_sorted(arr,arr+n)){
        cout<<"yes"<<endl<<N1+1<<" "<<N2+1;
    }
    else cout<<"no";

return 0;
}
