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

using namespace std;

const int MAXN = 2e5 + 5;

void solve (int test_case) {
	int n, M;
	cin >> n >> M;
	int a[n];
	for (int &e : a) {
		cin >> e;
	}
	sort (a, a + n);
	int i = 0, j = n - 1;
	int res = 0;
	while (i < j) {
		int sum = a[i] + a[j];
		if (sum == M) {
			++res;
			++i;
			--j;
		} else if (sum > M) {
			--j;
		} else {
			++i;
		}
	}
	cout << res;
}

Ries0703 {
	ios_base::sync_with_stdio (false);
	cin.tie (nullptr);
	cout.tie (nullptr);

	int T = 1;
	FOR (i, 1, T)
	solve (i);


	return 0;
}
