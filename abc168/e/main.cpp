// ベクトルの内積で考えても解ける

// A_i*A_j + B_i*B_j = 0
// A_i*A_j = - B_i *B_j
// これはB_i, A_jが0のときは壊れることに注意
// i, jごとに分類し，まとめる
// A_i/B_i = - B_j/A_j

// (A_i, B_i) = A_i/B_i = X_i 
// (A_J, B_j) = A_j/B_j = X_j
// X_i = - (1/X_j)
// X_j = - (1/X_i)

// Aのみ(1匹以上) 2^A_i -1(何も選ばない)　+ Bのみ(1匹以上) 2^B_i -1(何も選ばない) -1 + 何も選ばない -1

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
  int n;

  // 
  map<pair<ll, ll>, pair<int, int>> mp;

  int zero;
  rep(i, n){
    ll x, y;
    cin >> x >> y;

    // 
    if (x==0 && y==0) {
      zero++;
      continue;
    }

    // 最大公約数と最小公約数
    ll g =gcd(x, y);
    x /= g;
    y /= g;
    if (y < 0) {
      x = -x;
      y = -y;
    }
    // 90度〜270度の部分を反転
    if (y == 0 && x < 0) {
      x = -x;
      y = -y;
    }

    // 270度〜360度の部分を反転
    bool rot = false;
    if (x <= 0) {
      ll tmp = x;
      x = y;
      y = -tmp;
    }
  }

  return 0;
}    