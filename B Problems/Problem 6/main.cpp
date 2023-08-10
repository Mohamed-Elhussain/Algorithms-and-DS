#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char arr[51][51];
bool visited[51][51];

ll n,m;
ll dx[4] = {0, 0, 1, -1};
ll dy[4] = {1, -1, 0, 0};

bool dfs(ll x, ll y, ll px, ll py, ll cnt){
    visited[x][y] = true;
    ++cnt;
    bool ans = false;

    for(int i=0; i<4; i++) {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
        if(arr[nx][ny] != arr[x][y]) continue;
        if(!visited[nx][ny]) ans = ans || dfs(nx, ny, x, y, cnt);
        else if(nx == px && ny == py) continue;
        else if(cnt >= 3) return true;
    }
    return ans;

}



int main(){

    cin>>n>>m;

    for(ll i = 0; i < n; ++i){
        for(ll j = 0; j < m; ++j){
            cin>>arr[i][j];
        }
    }

    for(ll i = 0; i < n; ++i){
        for(ll j = 0; j < m; ++j){
            if(!visited[i][j]){
                if(dfs(i,j,-1,-1, 0)){
                cout<<"Yes"; return 0;
                }
            }
        }
    }

    cout<<"No";
    return 0;
}
