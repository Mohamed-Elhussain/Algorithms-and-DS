#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    set<int>s;
    char arr[n][m];
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<n; ++i){
        bool G = 1, C = 0; int candy , dwarf;
        for(int j = 0; j<m; ++j){
            if(arr[i][j] == 'S' && G ){
                cout<<"-1"; return 0;
                            }

        if( arr[i][j] == 'G'){
            dwarf = j;
            G = 0;
        }
        if(arr[i][j] == 'S'){
            candy = j;
            C = 1;
        }
        if(!G && C){
            s.insert(candy - dwarf);
            break;
        }


    }
    }
    cout<<s.size();

return 0;
}
