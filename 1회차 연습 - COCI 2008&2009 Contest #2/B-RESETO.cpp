#include <bits/stdc++.h>
#define REP(i,a,b) for (auto i = (a); i <= (b); ++i)
#define debug(x) cout << #x << " is " << x << el
#define el '\n'
using namespace std; using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, k, cnt = 0; cin >> n >> k;
    bool sieve[n+1] = {0,};
    REP(x,2,n) {
        if (sieve[x]) continue;
        for (int u = x; u <= n; u += x) {
            if (sieve[u]) continue;
            sieve[u] = 1;
            if (++cnt == k) {
                cout << u;
            }
        }
    }
}
