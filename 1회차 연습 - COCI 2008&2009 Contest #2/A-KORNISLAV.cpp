#include <bits/stdc++.h>
#define REP(i,a,b) for (auto i = (a); i <= (b); ++i)
#define debug(x) cout << #x << " is " << x << el
#define el '\n'
using namespace std; using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int> v;
    REP(i,1,4) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[0]*v[2];
}
