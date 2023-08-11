#include <bits/stdc++.h>
using ll = long long;
using namespace std;

const int N = 2e5 + 55;

int n, k, l, r, s_all, s_k;

int main() {

    cin >> n >> k >> l >> r >> s_all >> s_k;

    vector<int> a(n);

    int toJoin = s_k / k, reminder = s_k % k;

    for (int i = 0; i < k; i++)
        a[i] = toJoin + (reminder > 0), reminder--;

    if (n - k > 0)
        toJoin = (s_all - s_k) / (n - k), reminder = (s_all - s_k) % (n - k);

    for (int i = k; i < n; i++)
        a[i] = toJoin + (reminder > 0), reminder--;

    for (auto &i: a) {
        cout << i << ' ';
    }

    return 0;
}
