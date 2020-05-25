// doubling

#define rep(i, n) for (int i = 0; i < (n); ++i)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;

//2^16 桁数
// 使わない
const int D = 60;
const int MAX_N = 20000;

int to[D][MAX_N];

int main()
{
  ll n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
      cin >> a.at(i);
      a[i]--;  // 0-indexed に変更
  }
  int logK = 1;
  while ((1ll << logK) < k) logK++;
  // doubling[i][j] : j番目から 2^i 進んだ町
  vector<vector<int> > doubling(logK, vector<int>(n));
  rep(i, n) {
    doubling[0][i] = a[i];
  }
  // 前処理 doubling の計算
  for (int i = 0; i < logK - 1; i++) {
      for (int j = 0; j < n; j++) {
        doubling[i + 1][j] = doubling[i][doubling[i][j]];
      }
  }
  int now = 0;
  for (int i = 0; k > 0; i++) {
    //cout << k <<endl;
    if (k & 1) {
      //cout << i << ' ' << k << endl;
      now = doubling[i][now];
      //cout << now << endl;
    } 
    k = k >>1;
  }

  cout << now + 1 << endl;
  
  return 0;
}