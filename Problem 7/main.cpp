#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
     string s1,s2,s3, tmp ="";
     cin>>s1>>s2>>s3;

     tmp = s1 + s2;

    sort(tmp.begin(), tmp.end());
    sort(s3.begin(), s3.end());

    if(tmp == s3){
        cout<<"YES";
    }

    else{
        cout<<"NO";
    }

    return 0;
}
