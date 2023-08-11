#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;
    priority_queue<int>pq(1,0);
    int sum = 0;
    for(int i = 0; i<s.length(); ++i){
    if(s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r'){
        sum += (i+1 - pq.top() ) * (s.length()-(i+3));
        pq.push(i+1);
    }
    }

    cout<<sum;

    return 0;
}
