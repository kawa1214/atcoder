// BFSでとく 木構造になっておりBFS木とよぶ．BFS木は以下の２点を満たしている
// ２つ離れた層の間には辺が存在しない
// 根以外のどの頂点も１つ前の層につながる辺が必ず１本以上ある
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
  int n, m;
  cin >> n >> m;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    // toを各頂点ごとにもっていて，配列の中にはつながっている値
    to[a].push_back(b);
    to[b].push_back(a);
  }

  // BFS
  // 待ち行列 先入れ先だしのリスト構造でデータを保持
  queue<int> q;
  // dist: 距離 pre: 直前の頂点
  vector<int> dist(n, INF);
  vector<int> pre(n, -1);
  // 支点
  dist[0] = 0;
  q.push(0);
  while (!q.empty()) {
    // qの先頭を取り出し，隣を更新してく
    int v = q.front(); q.pop();
    // 隣の頂点はv 
    for (int u : to[v]) {
      // 距離がわかっているときはなにもしない
      if (dist[u] != INF) continue;
      // まだわかっていないときは，距離を１たし，
      // 直前の頂点(v)を記録する
      dist[u] = dist[v]+1;
      pre[u] = v;
      q.push(u);
    }
  }
 
  cout << "Yes" << endl;
  rep(i,n) {
    if (i == 0) continue;
    int ans = pre[i];
    ++ans;
    cout << ans << endl;
  }
  return 0;
}