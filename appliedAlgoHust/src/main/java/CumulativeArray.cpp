#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FOD(i, a, b) for (int i = (a); i >= (b); i--)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define Ries0703 signed main()
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define file(name) if (fopen(name ".inp", "r")) { freopen(name ".inp", "r", stdin); freopen(name ".out", "w", stdout); }
#define ll long long
using namespace std;

const int MAXN = 2e5 + 5;

void solve (int test_case) {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	int temp;
	for (int &e : a) {
		cin >> temp;
		sum += temp;
		e = sum;
	}
	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		--l;
		--r;
		if (l == 0) { cout << a[r] << '\n'; }
		else { cout << a[r] - a[l - 1] << '\n'; }
	}
}

Ries0703 {
	ios_base::sync_with_stdio (false);
	cin.tie (nullptr);
	cout.tie (nullptr);

	int T = 1;
	// cin >> T;
	FOR (i, 1, T)
	solve (i);


	return 0;
}
