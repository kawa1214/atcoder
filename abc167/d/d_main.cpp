// doubling

#define rep(i, n) for (int i = 0; i < (n); ++i)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;

//2^16 桁数
const int D = 60;
const int MAX_N = 20000;

int to[D][MAX_N];

int main()
{
  int n;
  ll k;
  cin >> n >> k;

  // to[i][j] jから2^i個さき
  rep(i, n) {
    cin >> to[0][i];
    to[0][i]--;

    //cout << to[0][i] << endl;
  }
  //ダブリングの事前計算
  //int logK = 1;
  //while ((1LL << logK) < k) logK++;
  // doubling[k][i] : i番目から 2^k 進んだ町
  //for (int k = 0; k < logK - 1; k++) {
  int logK = 1;
  while ((1LL << logK) < k) logK++;
  cout << logK << endl;
  for (int i = 0; i < k; i++) {
    cout << i << ':';
    for (int j = 0; j < n; j++) {
        to[i+1][j] = to[i][to[i][j]];
        cout << to[i+j][j] << ',';
    }
    cout << endl;
  }
  
  /*
  rep(i, D-1) {
    //cout << i << ':';
    rep(j, n) {
      //2^iこたどった先 
      to[i+1][j] = to[i][to[i][j]];
      //cout << to[i+1][j] << ',';
    }
    //cout << endl;
  }
  */
  
  //最初の頂点
  int v=0;
  //cout << k << endl;
  for (int i = D-1; i >= 0; --i){
    // ^2を羅列できる
    ll l = 1ll<<i;
    //cout << l << endl;;
    if (l = k) {
      //cout << l << endl;
      //cout << to[i][v] << endl;
      v = to[i][v];
      k -= 1;
    }
  }

  //cout << v+1 << endl;
  return 0;
}