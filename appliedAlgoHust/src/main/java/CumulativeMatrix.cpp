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


int a[1001][1001];
int d[1001][1001];


void solve (int test_case) {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			d[i][j] = a[i][j] + d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
		}
	}
	int q;
	int r1, c1, r2, c2;
	cin >> q;
	while (q--) {
		cin >> r1 >> c1 >> r2 >> c2;
		cout << d[r2][c2] - d[r2][c1 - 1] - d[r1 - 1][c2] + d[r1 - 1][c1 - 1] << '\n';
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
