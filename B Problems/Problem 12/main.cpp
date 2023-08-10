#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
 ll n, x, prev = -1, cur, next, prev_cnt = 0, cur_cnt = 1, longest = 1;
 cin>>n;

cin>>x;
cur = x;

 for(ll i = 1; i < n; ++i){
   cin>>x;
   next = x;

   if(next == cur){
    cur_cnt++;
   }

   else if(next == prev){
    prev_cnt += cur_cnt;
    prev = cur;
    cur = next;
    cur_cnt = 1;
   }
   else{

    longest = max(longest, cur_cnt + prev_cnt);
    prev = cur;
    cur = next;
    prev_cnt = cur_cnt;
    cur_cnt = 1;

   }

 }

 cout<<max(longest, cur_cnt + prev_cnt);


    return 0;
}
