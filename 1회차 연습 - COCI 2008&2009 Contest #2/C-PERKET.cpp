#include <bits/stdc++.h>
#define REP(i,a,b) for (auto i = (a); i <= (b); ++i)
#define debug(x) cout << #x << " is " << x << el
#define el '\n'
using namespace std; using ll = long long;

int ngd(int idx, pair<int,int> x, pair<int,int> a[], int n) {
    if (idx == n) {
        if (x == make_pair(1,0)) return 1'000'000'010;
        return abs(x.first-x.second);
    }
    return min(ngd(idx+1,{x.first*a[idx].first,x.second+a[idx].second},a,n),ngd(idx+1,x,a,n));
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    pair<int,int> a[n];
    REP(i,0,n-1) cin >> a[i].first >> a[i].second;
    cout << ngd(0,{1,0},a,n);
}
