#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
 int n,h,k, counter = 0;
 cin>>n>>h;

 while(n--){
    cin>>k;
    k > h ? counter += 2 : ++counter;
 }
 cout<<counter;

    return 0;
}
