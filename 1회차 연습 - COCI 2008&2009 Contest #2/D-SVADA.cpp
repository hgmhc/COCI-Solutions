#include <bits/stdc++.h>
#define REP(i,a,b) for (auto i = (a); i <= (b); ++i)
#define debug(x) cout << #x << " is " << x << el
#define el '\n'
using namespace std; using ll = long long;
const int N = 103, M = 103;
int t, n, m, a[N], b[N], c[M], d[M];

ll f(int x) {
    ll cnt = 0;
    REP(i,1,n) {
        if (a[i] > x) continue;
        cnt += (x-a[i])/b[i]+1;
    }
    return cnt;
}
ll g(int x) {
    ll cnt = 0;
    REP(i,1,m) {
        if (c[i] > x) continue;
        cnt += (x-c[i])/d[i]+1;
    }
    return cnt;
}
int ans;
bool ok(ll coc) {
    int x = 0;
    for (int b = t; b >= 1; b >>= 1)
        while (x+b <= t and f(x+b) < coc) x += b;
    ans = x+1;
    return g(t-x-1) > f(x);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> t >> n; REP(i,1,n) cin >> a[i] >> b[i];
    cin >> m; REP(i,1,m) cin >> c[i] >> d[i];
    
    ll x = 0, z = 1e18;
    for (ll b = 1e18; b >= 1; b >>= 1)
        while (x+b <= z and ok(x+b)) x += b;
    ok(x);
    cout << ans;
}
