#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FOD(i, a, b) for (int i = (a); i >= (b); i--)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define __Dennis_Tran__ signed main()
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define file(name) if (fopen(name ".inp", "r")) { freopen(name ".inp", "r", stdin); freopen(name ".out", "w", stdout); }
#define ll long long
using namespace std;

const int MAXN = 2e5 + 5;

void solve (int test_case) {
	ll n;
	int q;
	cin >> n >> q;
	int a[n];
	bool has_smaller = true;
	for (int &e : a) {
		cin >> e;
		has_smaller = e <= q;
	}
	if (!has_smaller) { cout << "-1"; }
	int res = -1;
	int l = 0;
	int r = 0;
	int sum = 0;
	while (r < n) {
		if (sum <= q) {
			res = max (res, r - l);
			sum += a[r++];
		} else {
			sum -= a[l++];
		}
	}
	while (l < r) {
		if (sum <= q) {
			res = max (res, r - l);
		}
		sum -= a[l++];
	}
	cout << res;
}

__Dennis_Tran__ {
	ios_base::sync_with_stdio (false);
	cin.tie (nullptr);
	cout.tie (nullptr);

	int T = 1;
	FOR (i, 1, T)
	solve (i);
	return (0 ^ 0);
}
