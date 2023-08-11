#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f[1000];
int main() {
	ll n,m,ans=1;
	cin>>n>>m;
	for (ll i=1; i<=n; i++) f[i]=i;
	for (ll i=0; i<m; i++) {
		ll a,b;
		cin>>a>>b;
		while (f[a]!=a) a=f[a];
		while (f[b]!=b) b=f[b];
		if (a!=b) ans*=2;
		f[b]=a;
	}
	cout<<ans<<endl;
	return 0;
}
