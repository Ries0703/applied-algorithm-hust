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
int n;
set<int> s;
void solve (int test_case) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		s.insert (temp);
	}
	string command;
	int v;
	while (true) {
		cin >> command;
		if (command == "#") { break; }
		cin >> v;
		if (command == "min_greater_equal") {
			auto it = s.lower_bound (v);
			if (it == s.end() ) {
				cout << "NULL\n";
			} else {
				cout << *it << '\n';
			}
		} else if (command == "min_greater") {
			auto it = s.upper_bound (v);
			if (it == s.end() ) {
				cout << "NULL\n";
			} else {
				cout << *it << '\n';
			}
		} else if (command == "insert") {
			s.insert (v);
		} else if (command == "remove") {
			s.erase (v);
		}

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
