#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

string s;
cin>>s;
vector<int>vec;

for(int i = 0; i < s.length(); ++i){
    if(s[i] != '+'){
        vec.push_back( s[i] - 48);
    }
}

sort(vec.begin(), vec.end());

for(int i = 0; i < vec.size(); ++i){
    if(i == vec.size() - 1){
        cout<<vec[i];
    }
    else cout<<vec[i]<<'+';
}


return 0;
}
