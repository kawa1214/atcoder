// https://atcoder.jp/contests/abc167/tasks/abc167_d
// https://algo-logic.info/calc-pow/
#define rep(i, n) for (int i = 0; i < (n); ++i)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;

const int INF = 1001001001;

int main()
{
  int n;
  ll  k;
  cin >> n >> k;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  // 訪れた頂点
  vector<int> s;
  vector<int>  ord(n+1, -1);
  int c=1, l=0;
  {
    int v = 1;
    while (ord[v] == -1){
      ord[v] = s.size();
      s.push_back(v);
      v = a[v-1];
    }
    c = s.size() - ord[v];
    l = ord[v];
  }

  if (k<1) cout << s[k] << endl;
  else {
    k -= 1;
    k %= c;
    cout << s[l+k] << endl;
  }
  return 0;
}