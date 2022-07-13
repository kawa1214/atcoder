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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, s, n) for (int i = s; i < (int)(n); i++)

const int M = 1000005;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    rep(i, n) cin >> a[i];
    vector<int> cnt(M);

    for (int x : a)
    {
        if (cnt[x] != 0)
        {
            cnt[x] = 2;
            continue;
        }
        for (int i = x; i < M; i += x)
            cnt[i]++;
    }

    int ans = 0;

    for (int x : a)
    {
        if (cnt[x] == 1)
            ans++;
    }

    cout << ans << endl;

    return 0;
}