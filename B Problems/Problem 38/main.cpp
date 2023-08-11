#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    priority_queue<int>first_radius, first_density; vector<int> second_density;
    int n,m,z,x,y,k,a,b;
    cin>>n;
    while(n--){
        cin>>x;
        first_radius.push(x);}
    cin>>m;
    while(m--){
        cin>>y;
        first_density.push(y);
    }
    cin>>z;
    while(z--){
        cin>>k;
        second_density.push_back(k);
    }
    sort(second_density.begin(), second_density.end());
    cin>>a>>b;
    double result = ((b*first_density.top()*pow(first_radius.top(), 2)) / (a*second_density[0]+b*first_density.top()));

    cout<<fixed<<setprecision(10)<<sqrt(result);


return 0;
}
