#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

#include <iostream>
#include <iomanip>
#include <math.h>
using ll = long long;

using namespace std;

const int INF = 1001001001;
// 10^ vector: 可変長配列
vector<int> to[100005];
int main()
{
  int n, ans, tmp;

  cin >> n;

	//vector<int> a(n);

  //rep(i, n) cin >> a[i];

  rep(i, n) {
    cin >> tmp;
    ans = ans*tmp;
  }

  rep(i, n)

  cout << ans << endl;

  return 0;
}