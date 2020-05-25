// https://atcoder.jp/contests/apg4b/tasks/APG4b_ac

#define rep(i, n) for (int i = 0; i < (n); ++i)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int INF = 1001001001;

int main()
{
	int n, m, x;
	cin >> n >> m >> x;

	int ans = INF;

	vector<int> c(n);
	vector<vector<int>> a(n, vector<int>(m));

	rep(i,n)
	{
		cin >> c[i];
		rep(j, m) cin >> a[i][j];
	}
		// 1<<n 2^n
		rep(s, 1<<n) {
			int cost =0;
			vector<int> d(m);
			rep(i, n) {
				// 右に１シフトずらして，そこが１だったら
				if (s>>i&1) {
					cost += c[i];
					rep(j, m) d[j] += a[i][j];
				}
			}
			bool ok = true;
			rep(j, m) if (d[j] < x) ok=false;
			if (ok) ans = min(ans, cost);
		}

	if (ans == INF) cout << -1 << endl;
	else cout << ans << endl;

	return 0;
}
