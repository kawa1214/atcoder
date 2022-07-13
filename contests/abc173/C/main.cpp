#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, s, n) for (int i = s; i < (int)(n); i++)

// 2^(6*2)通りしか無いので、全探索で良さそう
int main()
{
    int h, w, k;

    cin >> h >> w >> k;

    vector<string> s(h);
    rep(i, h) cin >> s[i];

    int ans = 0;

    rep(is, 1 << h)
    {
        rep(js, 1 << w)
        {
            int cnt = 0;
            rep(i, h)
            {
                rep(j, w)
                {
                    if (is >> i & 1)
                        continue;
                    if (js >> j & 1)
                        continue;
                    if (s[i][j] == '#')
                        cnt++;
                }
            }
            if (cnt == k)
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
